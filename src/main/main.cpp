#include <iostream>
#include <limits>

//Fecha actual
#include <chrono>
#include <ctime>

#include "Fabrica.h"

//Datatypes
#include "DtFecha.h"
#include "DtFuncionario.h"
#include "DtLector.h"
#include "DtLibro.h"
#include "DtLibroFull.h"
#include "DtMaterial.h"
#include "DtMaterialBasico.h"
#include "DtMaterialFull.h"
#include "DtMaterialPrestado.h"
#include "DtMaterialPuntaje.h"
#include "DtPrestamo.h"
#include "DtPrestamoLector.h"
#include "DtPuntaje.h"
#include "DtRevista.h"
#include "DtRevistaFull.h"
#include "Tipomaterial.h"
#include "TipoUsuario.h"

using namespace std;

Fabrica * fabrica = Fabrica::getInstancia();

//Declaración de funciones
bool iniciarSesion();
void cerrarSesion();
void registrarLector();
void registrarFuncionario();
void registrarMaterial();
void registrarPrestamo();
void consultarPrestamosDeLector();
void verInformacionDeMaterial();
void puntuarMaterial();
void consultarPuntajesDeMaterial();
void eliminarLector();
void eliminarMaterial();
void relojDelSistema();
void cargarDatosDePrueba();

//Declaracíón de funciones Menú
void menu();
bool menuLector();
bool menuFuncionario();

//Declaración de funciones Auxiliares
int  ingresoEntero();
void pausa();
void verFechaActualDelSistema();
void cambiarFechaActualDelSistema();

//MAIN
int main() {
	// Setear la fecha actual del sistema inicial

	// 1. Obtener el tiempo actual
    auto ahora = std::chrono::system_clock::now();
    std::time_t tiempo_actual = std::chrono::system_clock::to_time_t(ahora);
    std::tm* tiempo_local = std::localtime(&tiempo_actual);

	int dia, mes, anio, hora, minuto;

	// 2. Extraer cada componente
	dia    = tiempo_local->tm_mday;
	mes    = tiempo_local->tm_mon + 1;     // tm_mon va de 0 a 11
	anio   = tiempo_local->tm_year + 1900; // tm_year cuenta desde 1900
	hora   = tiempo_local->tm_hour;
	minuto = tiempo_local->tm_min;

			  
	IControladorCambiarFechaActualDelSistema* controladorCambiarFechaActualDelSistema = fabrica->getControladorCambiarFechaActualDelSistema();
	controladorCambiarFechaActualDelSistema->cambiarFechaActualDelSistema(dia, mes, anio, hora, minuto);
	controladorCambiarFechaActualDelSistema->confirmar();
	delete controladorCambiarFechaActualDelSistema;
			  
	// Crear un funcionario inicial para iniciar sesión

	IControladorRegistrarFuncionario* controladorRegistrarFuncionario = fabrica->getControladorRegistrarFuncionario();
	controladorRegistrarFuncionario->registrarFuncionario("admin", "Administrador", "admin", 1);
	controladorRegistrarFuncionario->altaFuncionario();
	delete controladorRegistrarFuncionario;

	// Si salir == true, termina todo el programa
	bool salir;

	do {
		salir = iniciarSesion();
		if (salir) break;

		IControladorVerificarSesion* controladorVerificarSesion = fabrica->getControladorVerificarSesion();

		TipoUsuario tipoUsuario = controladorVerificarSesion->verificarSesion();

		delete controladorVerificarSesion;

		if (tipoUsuario == TipoUsuario::TU_LECTOR) {
			salir = menuLector();
		} else if (tipoUsuario == TipoUsuario::TU_FUNCIONARIO) {
			salir = menuFuncionario();
		} else {
			cout << "Tipo de usuario desconocido.";
			pausa();
		}
	}while (!salir);

	system("clear");
	cout << "Saliendo..." << endl;
	pausa();

	return 0;
}

//Implementación de funciones
bool iniciarSesion() {
	string id, contrasenia;
	IControladorIniciarSesion* controlador = fabrica->getControladorIniciarSesion();

	bool exito = false, salir = false;
	do {
		if (salir) break;

		system("clear");
		cout << "	< Iniciar Sesion >" << endl << endl;
		cout << "Ingrese su id: ";
		cin >> id;
		cout << "Ingrese su contrasenia: ";
		cin >> contrasenia;

		exito = controlador->iniciarSesion(id, contrasenia);

		if (exito) {
			system("clear");
			cout << "Inicio de sesion exitoso." << endl;
		} else {
			system("clear");
			cout << "Error al iniciar sesion. Verifique sus credenciales." << endl;
			pausa();
			int opcion;
			do {
				system("clear");
				cout << "Desea volver a intentar iniciar sesion?" << endl;
				cout << "1. Si" << endl;
				cout << "2. No" << endl;
				cout << "Seleccione una opcion: ";
				opcion = ingresoEntero();
				switch (opcion) {
					case 1: break;
					case 2: salir = true; break;
					default: 
						system("clear");
						cout << "Opcion invalida, intente nuevamente." << endl; 
						pausa();
						break;
				} 
			} while(opcion != 1 && opcion != 2);
		}
		pausa();
	} while (!exito);

	delete controlador;

	return salir;
}

void cerrarSesion() {
	IControladorCerrarSesion * controlador = fabrica->getControladorCerrarSesion();
	controlador->cerrarSesion();
	system("clear");
	cout << "Sesion cerrada exitosamente." << endl;
	pausa();
	delete controlador;
}

void registrarLector() {
	string id, nombre, contrasenia;

	system("clear");
	cout << "Ingrese el id del lector: ";
	cin >> id;
	cout << "Ingrese el nombre del Lector: ";
	cin >> nombre;
	cout << "Ingrese la contrasenia del lector: ";
	cin >> contrasenia;


	IControladorRegistrarLector * controladorLector = fabrica->getControladorRegistrarLector();
	

	DtFecha fechaRegistro;
	int opcion;
	do {
		system("clear");
		cout << "Desea registrarlo con la fecha actual del sistema? " << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		
		switch (opcion) {
			case 1: { // Added curly braces to create a new scope
				IControladorVerFechaActualDelSistema * controladorVerFechaActual = fabrica->getControladorVerFechaActualDelSistema();
				fechaRegistro = controladorVerFechaActual->verFechaActualDelSistema();
				delete controladorVerFechaActual;
			} break;
			case 2: { // Added curly braces to create a new scope
				int dia, mes, anio, hora, minuto;
				system("clear");
				cout << "A continuacion se le pediran los datos en el formato: [dd/mm/aaaa hh:mm]" << endl << endl;
				cout << "Ingrese el dia (dd): ";
				dia = ingresoEntero();
				cout << "Ingrese el mes (mm): ";
				mes = ingresoEntero();
				cout << "Ingrese el anio (aaaa): ";
				anio = ingresoEntero();
				cout << "Ingrese la hora (hh): ";
				hora = ingresoEntero();
				cout << "Ingrese el minuto (mm): ";
				minuto = ingresoEntero();
				fechaRegistro = DtFecha(dia, mes, anio, hora, minuto);
			} break;
			default:
				cout << "Opcion invalida, intente nuevamente." << endl;
			break;
		} 
	}	while (opcion != 1 && opcion != 2);

	DtLector resultado = controladorLector->registrarLector(id, nombre, contrasenia, fechaRegistro);

	do {
		system("clear");
		cout << "Desea guardar el lector con los datos: " << endl;
		cout << resultado.toString() << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		switch (opcion) {
			case 1: 
				controladorLector->altaLector();
				system("clear");
				cout << "Lector registrado exitosamente." << endl; 
				break;
			case 2:
				system("clear");
				cout << "Registro de lector cancelado." << endl;
				break;
			default:
				system("clear");
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);
	
	delete controladorLector;
}

void registrarFuncionario() {
	string id, nombre, contrasenia;
	int numEmpleado;

	system("clear");
	cout << "Ingrese el id del funcionario: ";
	cin >> id;
	cout << "Ingrese el nombre del funcionario: ";
	cin >> nombre;
	cout << "Ingrese la contrasenia del funcionario: ";
	cin >> contrasenia;
	cout << "Ingrese el numero de empleado del funcionario: ";
	numEmpleado = ingresoEntero();


	if (numEmpleado == -1){
		system("clear");
		cout << "Error: El numero de Funcionario debe ser un numero entero." << endl;
		pausa();
		return;
	}

	IControladorRegistrarFuncionario * controlador = fabrica->getControladorRegistrarFuncionario();
	DtFuncionario resultado = controlador->registrarFuncionario(id, nombre, contrasenia, numEmpleado);

	int opcion;
	do {
		system("clear");
		cout << "Desea guardar el funcionario con los datos: " << endl;
		cout << resultado.toString() << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		system("clear");
		switch (opcion) {
			case 1: 
				controlador->altaFuncionario();
				cout << "Funcionario registrado exitosamente." << endl; 
				break;
			case 2: 
				cout << "Registro de funcionario cancelado." << endl; 
				break;
			default: 
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);

	delete controlador;
}

void registrarMaterial() {
	string codigo, titulo;
	int anioPublicacion;
	TipoMaterial tipo;

	system("clear");

	cout << "Ingrese el codigo del material: ";
	cin >> codigo;
	cout << "Ingrese el titulo del material: ";
	cin >> titulo;
	cout << "Ingrese el anio de publicacion del material: ";
	anioPublicacion = ingresoEntero();

	if (anioPublicacion == -1){
		system("clear");
		cout << "Error: El anio de publicacion debe ser un numero entero." << endl;
		pausa();
		return;
	}


	int tipoInt;
	do {
		system("clear");
		cout << "Ingrese el tipo de material (1 para Libro, 2 para Revista): ";
		tipoInt = ingresoEntero();
		system("clear");
		switch (tipoInt) {
		case 1:
			tipo = TipoMaterial::TM_LIBRO;
			break;
		case 2:
			tipo = TipoMaterial::TM_REVISTA;
			break;
		default:
			cout << "Opcion invalida, intente nuevamente." << endl;
			break;
		}
	} while (tipoInt != 1 && tipoInt != 2);

	IControladorRegistrarMaterial * controlador = fabrica->getControladorRegistrarMaterial();
	controlador->registrarMaterial(codigo, titulo, anioPublicacion, tipo);

	if (tipo == TipoMaterial::TM_LIBRO) {
		string autor;
		int cantPaginas;

		cout << "Ingrese el autor del libro: ";
		cin.ignore();
		getline(cin, autor);
		//cin >> autor;
		cout << "Ingrese la cantidad de paginas del libro: ";
		cantPaginas = ingresoEntero();

		if (cantPaginas == -1){
			system("clear");
			cout << "Error: La cantidad de paginas debe ser un numero entero." << endl;
			pausa();
			delete controlador;
			return;
		}


		DtLibro resultado = controlador->ingresarDatosLibro(autor, cantPaginas);
		system("clear"); cout << "Datos ingresados para el libro: " << endl;
		cout << resultado.toString() << endl << endl;

	} else if (tipo == TipoMaterial::TM_REVISTA) {
		int numEdicion;
		bool publicacionMensual;
		cout << "Ingrese el numero de edicion de la revista: ";
		numEdicion = ingresoEntero();
		int pubMensualInt;
		do {
			cout << "La revista es de publicacion mensual? (1 para Si, 2 para No): ";
			pubMensualInt = ingresoEntero();
			switch (pubMensualInt) {
			case 1:
				publicacionMensual = true;
				break;
			case 2:
				publicacionMensual = false;
				break;
			default:
				cout << "Opcion invalida, intente nuevamente." << endl;
				break;
			}
		} while (pubMensualInt != 1 && pubMensualInt != 2);
		
		DtRevista resultado = controlador->ingresarDatosRevista(numEdicion, publicacionMensual);
		system("clear");cout << "Datos ingresados para la revista: " << endl;
		cout << resultado.toString() << endl << endl;
	}

	int opcion;
	do {
		cout << "Desea confirmar el registro del material? " << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		switch (opcion) {
			case 1: 
				controlador->confirmar();
				system("clear");
				cout << "Material registrado exitosamente." << endl; 
				break;
			case 2:
				system("clear");
				cout << "Registro de material cancelado." << endl; 
				break;
			default: 
				system("clear");
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);

	delete controlador;
}

void registrarPrestamo() {
	// Implementar lógica aquí
	string idLector, codigoMaterial, fechaPrestamoStr;
	DtFecha fechaPrestamo;
	int cantDias;

	IControladorRegistrarPrestamo* controlador = fabrica->getControladorRegistrarPrestamo();
	system("clear");
	cout << "Ingrese el id del lector: ";
	cin >> idLector;
	try
	{
		DtLector dtLector = controlador->obtenerLector(idLector);
		cout << "Datos del lector: " << endl << dtLector.toString() << endl << endl;
	}
	catch(const invalid_argument& e)
	{
		cout << e.what() << endl;
		pausa();
		delete controlador;
		return;
	}
	

	cout << "Ingrese el codigo del material: ";
	cin >> codigoMaterial;
	try
	{
		DtMaterial dtMaterial = controlador->obtenerMaterial(codigoMaterial);
		cout << "Datos del material: " << endl << dtMaterial.toString() << endl << endl;
	}
	catch(const invalid_argument& e)
	{
		cout << e.what() << endl;
		pausa();
		delete controlador;
		return;
	}

	cout << "Ingrese la fecha del prestamo (dia mes anio hora minuto): ";
	cin.ignore();
	getline(cin, fechaPrestamoStr);
	
	try {
		fechaPrestamo = DtFecha(stoi(fechaPrestamoStr.substr(0, 2)), stoi(fechaPrestamoStr.substr(3, 2)), stoi(fechaPrestamoStr.substr(6, 4)), stoi(fechaPrestamoStr.substr(11, 2)), stoi(fechaPrestamoStr.substr(14, 2)));
	} catch (const invalid_argument& e) {
		cout << "Formato de fecha invalido. Use el formato: dia mes anio hora minuto" << endl;
		pausa();
		return;
	}

	cout << "Ingrese la cantidad de dias del prestamo: ";
	cantDias = ingresoEntero();
	DtPrestamo dtPrestamo;
	try {
		dtPrestamo = controlador->registrarPrestamo(fechaPrestamo, cantDias);
	} catch (const invalid_argument& e) {
		cout << e.what() << endl;
		pausa();
		delete controlador;
		return;
	}
	int opcion;
	do {
		system("clear");
		cout << "Desea confirmar el registro del prestamo con los datos:" << endl;
		cout << dtPrestamo.toString() << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		system("clear");
		switch (opcion) {
			case 1: 
				controlador->confirmar();
				cout << "Prestamo registrado exitosamente." << endl; 
				break;
			case 2: 
				cout << "Registro de prestamo cancelado." << endl; 
				break;
			default: 
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);
	delete controlador;
	
}

void consultarPrestamosDeLector() {
	string idLector;
	system("clear");
	cout << "Ingrese el id del lector para consultar sus prestamos: ";
	cin >> idLector;

	IControladorConsultarPrestamosDeLector* controlador = fabrica->getControladorConsultarPrestamosDeLector();
	try {
		DtPrestamoLector dtPrestamoLector = controlador->obtenerLector(idLector);
		cout << dtPrestamoLector.toString();
	} catch (const invalid_argument& e) {
		cout << e.what() << endl;
	}

	pausa();
	
	delete controlador;
}

void verInformacionDeMaterial() {
	system("clear");
	IControladorVerInformacionDeMaterial* controlador = fabrica->getControladorVerInformacionDeMaterial();
	
	if(controlador->isEmpty()){
		cout << "No hay materiales registrados en el sistema..." << endl;
		pausa();
		delete controlador;
		return;
	}

	cout << "	< Ver Informacion de Material >" << endl << endl; 

	vector<DtMaterialBasico> copiaMateriales = controlador->listarMateriales();
	cout << "Materiales Registrados:" << endl;
	for (DtMaterialBasico material : copiaMateriales){
		cout << material.toString() << endl;
	}
	
	string codigo;
	cout << "\nIngrese codigo del Material a seleccionar: ";
	cin >> codigo;

	try
	{
		system("clear");
		DtMaterialFull * dtMaterialFull = controlador->seleccionarMaterial(codigo);
		cout << "	< Informacion del material >" << endl;
		cout << dtMaterialFull->toString() << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	pausa();
	delete controlador;
}

void puntuarMaterial(){
	system("clear");

	IControladorPuntuarMaterial* controlador = fabrica->getControladorPuntuarMaterial();
	string codigo;
	int puntaje;

	cout << "	< Puntuar Material >" << endl << endl; 

	vector<DtMaterialBasico> vectorMaterialesBasicos = controlador->listarMateriales();
	cout << "Materiales Registrados:" << endl;
	for(const auto& materialBasico : vectorMaterialesBasicos){
		cout << materialBasico.toString() << endl;
	}
	
	cout << endl << "Ingrese el codigo del material a seleccionar: "; 
	cin >> codigo;
	DtMaterialBasico materialBasico = controlador->seleccionarMaterial(codigo);
	system("clear");
	cout << "Material Seleccionado:" << endl;
	cout << materialBasico.toString() << endl;

	DtPuntaje dtPuntaje = controlador->obtenerPuntaje();
	if(dtPuntaje.getValor() != -1){
		cout << "El Puntaje anterior era: " + to_string(dtPuntaje.getValor()) << endl;
	}
	cout << endl << "Ingrese el nuevo puntaje para el material: ";
	puntaje = ingresoEntero();
	controlador->puntuarMaterial(puntaje);

	delete controlador;
}

void consultarPuntajesDeMaterial() {
	system("clear");
	IControladorConsultarPuntajesDeMaterial* controlador = fabrica->getControladorConsultarPuntajesDeMaterial();
	string codigoDeMaterial;

	vector<DtMaterialBasico> vectorMateriales = controlador->listarMateriales();
	if (vectorMateriales.empty())
	{
		cout << "No hay materiales registrados en el sistema." << endl;
		pausa();
		delete controlador;
		return;
	}

	cout << "	< Consultar Puntajes de Material >" << endl << endl; 

	cout << "Materiales Registrados:" << endl;
	for(const auto& material : vectorMateriales)
		cout << material.toString() << endl;
	cout << endl << "Ingrese el codigo del material a consultar: ";
	cin >> codigoDeMaterial;
	cout << endl;

	try {
		DtMaterialPuntaje resultado = controlador->seleccionarMaterial(codigoDeMaterial);
		cout << "Informacion del material: " << endl;
		cout << resultado.toString() << endl;
	} catch (const invalid_argument& e) {
		cout << e.what() << endl;
	}

	pausa();
	delete controlador;
}

void eliminarLector(){
	system("clear");
	IControladorEliminarLector* controlador = fabrica->getControladorEliminarLector();
	string id;
	
	cout << "	< Eliminar Lector >	" << endl; 
	cout << "Ingrese ID del Lector: ";
	cin >> id;

	try
	{
		DtLector dtLector = controlador->consultarLector(id);
		int opcion;
		do {
			system("clear");
			cout << "Desea a eliminar el usuario: " << dtLector.getNombre() << " con ID: " << dtLector.getId() << "?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cout << "Seleccione una opcion: ";
			opcion = ingresoEntero();
			switch (opcion) {
				case 1: 
					controlador->confirmar(dtLector.getId());
					cout << "Lector eliminado exitosamente..." << endl; 
					break;
				case 2: 
					cout << "Operación cancelada exitosamente." << endl; 
					break;
				default: 
					cout << "Opcion invalida, intente nuevamente." << endl; 
					break;
			}
			pausa();
		} while (opcion != 1 && opcion != 2);
	}
	catch(const std::exception& e)
	{
		system("clear");
		std::cerr << e.what() << '\n';
		pausa();
	}

	delete controlador;
	
}

void eliminarMaterial(){
	system("clear");
	IControladorEliminarMaterial* controlador = fabrica->getControladorEliminarMaterial();
	
	if(controlador->isEmpty()){
		cout << "No hay materiales registrados en el sistema..." << endl;
		pausa();
		delete controlador;
		return;
	}

	cout << "	< Eliminar Material >	" << endl; 

	vector<DtMaterialBasico> copiaMateriales = controlador->listarMateriales();
	for (DtMaterialBasico material : copiaMateriales){
		cout << material.toString() << endl;
	}
	
	string codigo;
	cout << "Ingrese el codigo del Material: ";
	cin >> codigo;

	try
	{
		DtMaterialBasico dtMaterialBasico = controlador->seleccionarMaterial(codigo);
		int opcion;
		do {
			cout << "Desea a eliminar el material : " << dtMaterialBasico.getTitulo() << " con Codigo: " << dtMaterialBasico.getCodigo() << "?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cout << "Seleccione una opcion: ";
			opcion = ingresoEntero();
			switch (opcion) {
				case 1: 
					controlador->confirmar(dtMaterialBasico.getCodigo());
					system("clear");
					cout << "Material eliminado exitosamente..." << endl; 
					break;
				case 2:
					system("clear");
					cout << "Operación cancelada exitosamente." << endl; 
					break;
				default: 
					system("clear");
					cout << "Opcion invalida, intente nuevamente." << endl; 
					break;
			}
			pausa();
		} while (opcion != 1 && opcion != 2);

	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << e.what() << '\n';
		pausa();
	}
	delete controlador;
}

void relojDelSistema() {

	int opcion;
	do {
		system("clear");
		cout << "	< Reloj del Sistema >" << endl;
		cout << "1. Ver fecha del sistema" << endl;
		cout << "2. Cambiar fecha del sistema" << endl;
		cout << "0. Volver" << endl << endl;
		cout << "Seleccione una opcion: ";

		opcion = ingresoEntero();

		switch(opcion) {
			case 0: cout << "Volviendo..." << endl; pausa(); break;
			case 1: verFechaActualDelSistema(); break;
			case 2: cambiarFechaActualDelSistema(); break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		}
	} while (opcion != 0);
}

void verFechaActualDelSistema() {
	IControladorVerFechaActualDelSistema* controlador = fabrica->getControladorVerFechaActualDelSistema();
	DtFecha fechaActual = controlador->verFechaActualDelSistema();
	system("clear");
	cout << "La fecha actual en el sistema es: " + fechaActual.toString() << endl;
	pausa();
	delete controlador;
}

void cambiarFechaActualDelSistema() {
	int dia, mes, anio, hora, minuto;
	system("clear");
	cout << "A continuacion se le pediran los datos en el formato: [dd/mm/aaaa hh:mm]" << endl << endl;
	cout << "Ingrese el dia (dd): ";
	dia = ingresoEntero();
	cout << "Ingrese el mes (mm): ";
	mes = ingresoEntero();
	cout << "Ingrese el anio (aaaa): ";
	cin >> anio; // anio = ingresoEntero();
	cout << "Ingrese la hora (hh): ";
	hora = ingresoEntero();
	cout << "Ingrese el minuto (mm): ";
	minuto = ingresoEntero();

	IControladorCambiarFechaActualDelSistema* controlador = fabrica->getControladorCambiarFechaActualDelSistema();
	DtFecha nuevaFecha = controlador->cambiarFechaActualDelSistema(dia, mes, anio, hora, minuto);
	
	cout << "Datos ingresados para la fecha: " << endl;
	cout << nuevaFecha.toString() << endl << endl;

	int opcion;
	do {
		cout << "Desea confirmar el cambio de fecha? " << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		opcion = ingresoEntero();
		switch (opcion) {
			case 1: 
				controlador->confirmar();
				cout << "Fecha cambiada exitosamente." << endl; 
				break;
			case 2: 
				cout << "Cambio de hora cancelado." << endl; 
				break;
			default: 
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);

	delete controlador;
}

void cargarDatosDePrueba() {
	//Registro de lectores
	IControladorRegistrarLector* controladorRegistrarLector = fabrica->getControladorRegistrarLector();

	controladorRegistrarLector->registrarLector("l1234", "Lector1", "1234", DtFecha(1, 1, 2023, 0, 0));
	controladorRegistrarLector->altaLector();

	controladorRegistrarLector->registrarLector("l5678", "Lector2", "5678", DtFecha(1, 1, 2023, 0, 0));
	controladorRegistrarLector->altaLector();

	delete controladorRegistrarLector;

	//Registro de funcionarios
	IControladorRegistrarFuncionario* controladorRegistrarFuncionario = fabrica->getControladorRegistrarFuncionario();

	controladorRegistrarFuncionario->registrarFuncionario("f1234", "Funcionario1", "1234", 2);
	controladorRegistrarFuncionario->altaFuncionario();

	controladorRegistrarFuncionario->registrarFuncionario("f5678", "Funcionario2", "5678", 3);
	controladorRegistrarFuncionario->altaFuncionario();

	delete controladorRegistrarFuncionario;

	//Registro de materiales
	IControladorRegistrarMaterial* controladorRegistrarMaterial = fabrica->getControladorRegistrarMaterial();

	controladorRegistrarMaterial->registrarMaterial("li1234", "Libro1", 2001, TipoMaterial::TM_LIBRO);
	controladorRegistrarMaterial->ingresarDatosLibro("Autor1", 100);
	controladorRegistrarMaterial->confirmar();

	controladorRegistrarMaterial->registrarMaterial("li5678", "Libro2", 2002, TipoMaterial::TM_LIBRO);
	controladorRegistrarMaterial->ingresarDatosLibro("Autor2", 200);
	controladorRegistrarMaterial->confirmar();

	controladorRegistrarMaterial->registrarMaterial("re1234", "Revista1", 2003, TipoMaterial::TM_REVISTA);
	controladorRegistrarMaterial->ingresarDatosRevista(1, true);
	controladorRegistrarMaterial->confirmar();

	controladorRegistrarMaterial->registrarMaterial("re5678", "Revista2", 2004, TipoMaterial::TM_REVISTA);
	controladorRegistrarMaterial->ingresarDatosRevista(2, false);
	controladorRegistrarMaterial->confirmar();

	delete controladorRegistrarMaterial;

	//Registro de prestamos
	IControladorRegistrarPrestamo* controladorRegistrarPrestamo = fabrica->getControladorRegistrarPrestamo();

	controladorRegistrarPrestamo->obtenerLector("l1234");
	controladorRegistrarPrestamo->obtenerMaterial("li1234");
	controladorRegistrarPrestamo->registrarPrestamo(DtFecha(1, 1, 2023, 0, 0), 1);
	controladorRegistrarPrestamo->confirmar();

	controladorRegistrarPrestamo->obtenerMaterial("re1234");
	controladorRegistrarPrestamo->registrarPrestamo(DtFecha(1, 1, 2023, 0, 0), 2);
	controladorRegistrarPrestamo->confirmar();

	controladorRegistrarPrestamo->obtenerLector("l5678");
	controladorRegistrarPrestamo->obtenerMaterial("li5678");
	controladorRegistrarPrestamo->registrarPrestamo(DtFecha(1, 1, 2023, 0, 0), 3);
	controladorRegistrarPrestamo->confirmar();

	controladorRegistrarPrestamo->obtenerLector("l5678");
	controladorRegistrarPrestamo->obtenerMaterial("re5678");
	controladorRegistrarPrestamo->registrarPrestamo(DtFecha(1, 1, 2023, 0, 0), 4);
	controladorRegistrarPrestamo->confirmar();

	delete controladorRegistrarPrestamo;
}

void menu() {
	int opcion;
	do {
		system("clear");
		cout << "	< Menu Principal >" << endl;
		cout << "1. Iniciar Sesion" << endl;
		cout << "2. Cerrar Sesion" << endl;
		cout << "3. Registrar Lector" << endl;
		cout << "4. Registrar Funcionario" << endl;
		cout << "5. Registrar Material" << endl;
		cout << "6. Registrar Prestamo" << endl;
		cout << "7. Consultar Prestamos de Lector" << endl;
		cout << "8. Ver Informacion de Material" << endl;
		cout << "9. Puntuar Material" << endl;
		cout << "10. Consultar Puntajes de Material" << endl;
		cout << "11. Eliminar Lector" << endl;
		cout << "12. Eliminar Material" << endl;
		cout << "0. Salir" << endl << endl;
		cout << "Seleccione una opcion: ";

		opcion = ingresoEntero();

		switch (opcion) {
			case 1: iniciarSesion(); break;
			case 2: cerrarSesion(); break;
			case 3: registrarLector(); break;
			case 4: registrarFuncionario(); break;
			case 5: registrarMaterial(); break;
			case 6: registrarPrestamo(); break;
			case 7: consultarPrestamosDeLector(); break;
			case 8: verInformacionDeMaterial(); break;
			case 9: puntuarMaterial(); break;
			/*case 10: consultarPuntajesDeMaterial(); break;*/
			case 11: eliminarLector(); break;
			case 12: eliminarMaterial(); break;
			case 13: relojDelSistema(); break;
			case 14: cargarDatosDePrueba(); break;
			case 0: cout << "Saliendo..." << endl; break;
			default: system("clear"); cout << "Opcion invalida, intente nuevamente." << endl; break;
		}
	} while (opcion != 0);
}

bool menuLector() {
	int opcion;
	do {
		system("clear");
		cout << "	< Menu de Lector >" << endl;
		cout << "1. Cerrar Sesion" << endl;
		cout << "2. Ver Informacion de Material" << endl;
		cout << "3. Puntuar Material" << endl;
		cout << "4. Consultar Puntajes de Material" << endl;
		cout << "0. Salir" << endl << endl;
		cout << "Seleccione una opcion: ";

		opcion = ingresoEntero();
		
		switch (opcion) {
			case 1: cerrarSesion(); break;
			case 2: verInformacionDeMaterial(); break;
			case 3: puntuarMaterial(); break;
			case 4: consultarPuntajesDeMaterial(); break;
			case 0: cout << "Saliendo..." << endl; pausa(); break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		};
	} while (opcion != 0 && opcion != 1);
	// Si opcion == 0, devuelve true, sino, devuelve false
	return opcion == 0 ? true : false;
}

bool menuFuncionario() {
	int opcion;
	do {
		system("clear");
		cout << "	< Menu de Funcionario >" << endl;
		cout << "1. Cerrar Sesion" << endl;
		cout << "2. Registrar Lector" << endl;
		cout << "3. Registrar Funcionario" << endl;
		cout << "4. Registrar Material" << endl;
		cout << "5. Registrar Prestamo" << endl;
		cout << "6. Consultar Prestamos de Lector" << endl;
		cout << "7. Ver Informacion de Material" << endl;
		cout << "8. Consultar Puntajes de Material" << endl;
		cout << "9. Eliminar Lector" << endl;
		cout << "10. Eliminar Material" << endl;
		cout << "11. Reloj del sistema" << endl;
		cout << "12. Cargar datos de prueba" << endl;
		cout << "0. Salir" << endl << endl;
		cout << "Seleccione una opcion: ";

		opcion = ingresoEntero();

		switch (opcion) {
			case 1: cerrarSesion(); break;
			case 2: registrarLector(); break;
			case 3: registrarFuncionario(); break;
			case 4: registrarMaterial(); break;
			case 5: registrarPrestamo(); break;
			case 6: consultarPrestamosDeLector(); break;
			case 7: verInformacionDeMaterial(); break;
			case 8: consultarPuntajesDeMaterial(); break;
			case 9: eliminarLector(); break;
			case 10: eliminarMaterial(); break;
			case 11: relojDelSistema(); break;
			case 12: cargarDatosDePrueba(); break;
			case 0: cout << "Saliendo..." << endl; break;
			default: system("clear");cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		}
	} while (opcion != 0 && opcion != 1);
	// Si opcion == 0, devuelve true, sino, devuelve false
	return opcion == 0 ? true : false;
}

int ingresoEntero() {
	string opcion;
	cin >> opcion;
	
	try {
		return stoi(opcion);
	} catch (const invalid_argument& e) {
		return -1;
	}
}

void pausa() {
	cout << endl << "Presione Enter para continuar...";
	// Limpiar el buffer de entrada para evitar que el siguiente cin se salte
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	// Esperar a que el usuario presione Enter
	cin.get();
}