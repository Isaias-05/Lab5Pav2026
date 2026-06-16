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
void iniciarSesion();
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
//Declaración de funciones Auxiliares
void menu();
void menuLector();
void menuFuncionario();

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

	iniciarSesion();

	IControladorVerificarSesion* controladorVerificarSesion = fabrica->getControladorVerificarSesion();

	TipoUsuario tipoUsuario = controladorVerificarSesion->verificarSesion();

	delete controladorVerificarSesion;

	if (tipoUsuario == TipoUsuario::TU_LECTOR) {
		menuLector();
	} else if (tipoUsuario == TipoUsuario::TU_FUNCIONARIO) {
		menuFuncionario();
	} else {
		cout << "Tipo de usuario desconocido. Saliendo..." << endl;
	}

	return 0;
}

//Implementación de funciones
void iniciarSesion() {
	string id, contrasenia;
	IControladorIniciarSesion* controlador = fabrica->getControladorIniciarSesion();

	bool exito = false;
	do {
		system("clear");
		cout << "Ingrese su id: ";
		cin >> id;
		cout << "Ingrese su contrasenia: ";
		cin >> contrasenia;

		exito = controlador->iniciarSesion(id, contrasenia);

		if (exito) {
			cout << "Inicio de sesion exitoso." << endl;
		} else {
			cout << "Error al iniciar sesion. Verifique sus credenciales." << endl;
		}
		pausa();
	} while (!exito);
	
	delete controlador;
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
	IControladorVerFechaActualDelSistema * controladorVerFechaActual = fabrica->getControladorVerFechaActualDelSistema();

	DtFecha fechaActual = controladorVerFechaActual->verFechaActualDelSistema();
	delete controladorVerFechaActual;
	DtLector resultado = controladorLector->registrarLector(id, nombre, contrasenia, fechaActual);

	int opcion;
	do {
		system("clear");
		cout << "Desea guardar el lector con los datos: " << endl;
		cout << resultado.toString() << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
			case 1: 
				controladorLector->altaLector(); 
				cout << "Lector registrado exitosamente." << endl; 
				break;
			case 2: 
				cout << "Registro de lector cancelado." << endl;
				break;
			default: 
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
	cin >> numEmpleado;

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
		cin >> opcion;
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
	cin >> anioPublicacion;
	int tipoInt;
	do {
		cout << "Ingrese el tipo de material (1 para Libro, 2 para Revista): ";
		cin >> tipoInt;
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
	} while (tipoInt != 0 && tipoInt != 1);

	IControladorRegistrarMaterial * controlador = fabrica->getControladorRegistrarMaterial();
	controlador->registrarMaterial(codigo, titulo, anioPublicacion, tipo);

	if (tipo == TipoMaterial::TM_LIBRO) {
		string autor;
		int cantPaginas;

		system("clear");

		cout << "Ingrese el autor del libro: ";
		cin >> autor;
		cout << "Ingrese la cantidad de paginas del libro: ";
		cin >> cantPaginas;

		DtLibro resultado = controlador->ingresarDatosLibro(autor, cantPaginas);
		cout << "Datos ingresados para el libro: " << endl;
		cout << resultado.toString() << endl << endl;
	} else if (tipo == TipoMaterial::TM_REVISTA) {
		int numEdicion;
		bool publicacionMensual;
		cout << "Ingrese el numero de edicion de la revista: ";
		cin >> numEdicion;
		int pubMensualInt;
		do {
			cout << "La revista es de publicacion mensual? (1 para Si, 2 para No): ";
			cin >> pubMensualInt;
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
		cout << "Datos ingresados para la revista: " << endl;
		cout << resultado.toString() << endl << endl;
	}

	int opcion;
	do {
		cout << "Desea confirmar el registro del material? " << endl;
		cout << "1. Si" << endl;
		cout << "2. No" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		switch (opcion) {
			case 1: 
				controlador->confirmar();
				cout << "Material registrado exitosamente." << endl; 
				break;
			case 2: 
				cout << "Registro de material cancelado." << endl; 
				break;
			default: 
				cout << "Opcion invalida, intente nuevamente." << endl; 
				break;
		}
		pausa();
	} while (opcion != 1 && opcion != 2);

	delete controlador;
}

void registrarPrestamo() {
	// Implementar lógica aquí
}

void consultarPrestamosDeLector() {
	string idLector;
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
	// Implementar lógica aquí
}

void puntuarMaterial() {
	// Implementar lógica aquí
}

void consultarPuntajesDeMaterial() {
	IControladorConsultarPuntajesDeMaterial* controlador = fabrica->getControladorConsultarPuntajesDeMaterial();
	string codigoDeMaterial;

	cout << "Ingrese el codigo del material a consultar: ";
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

void eliminarLector() {

}

void eliminarMaterial() {

}

void relojDelSistema() {

	int opcion;
	do {
		system("clear");
		cout << "Reloj del sistema" << endl;
		cout << "1. Ver fecha del sistema" << endl;
		cout << "2. Cambiar fecha del sistema" << endl;
		cout << "0. Volver" << endl << endl;
		cout << "Seleccione una opcion: ";

		cin >> opcion;

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
	cin >> dia;
	cout << "Ingrese el mes (mm): ";
	cin >> mes;
	cout << "Ingrese el anio (aaaa): ";
	cin >> anio;
	cout << "Ingrese la hora (hh): ";
	cin >> hora;
	cout << "Ingrese el minuto (mm): ";
	cin >> minuto;

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
		cin >> opcion;
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

void menu() {
	int opcion;
	do {
		system("clear");
		cout << "Menu Principal" << endl;
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

		cin >> opcion;

		switch (opcion) {
			case 1: iniciarSesion(); break;
			case 2: cerrarSesion(); break;
			case 3: registrarLector(); break;
			case 4: registrarFuncionario(); break;
			case 5: registrarMaterial(); break;
/*			case 6: registrarPrestamo(); break;
			case 7: consultarPrestamosDeLector(); break;
			case 8: verInformacionDeMaterial(); break;
			case 9: puntuarMaterial(); break;
			case 10: consultarPuntajesDeMaterial(); break;
			case 11: eliminarLector(); break;
			case 12: eliminarMaterial(); break;*/
			case 0: cout << "Saliendo..." << endl; pausa(); break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		}
	} while (opcion != 0);
}

void menuLector() {
	int opcion;
	do {
		system("clear");
		cout << "Menu de Lector" << endl;
		cout << "1. Cerrar Sesion" << endl;
		cout << "2. Ver Informacion de Material" << endl;
		cout << "3. Puntuar Material" << endl;
		cout << "4. Consultar Puntajes de Material" << endl;
		cout << "0. Salir" << endl << endl;
		cout << "Seleccione una opcion: ";

		cin >> opcion;

		switch (opcion) {
			case 1: cerrarSesion(); break;
			case 2: verInformacionDeMaterial(); break;
			case 3: puntuarMaterial(); break;
			case 4: consultarPuntajesDeMaterial(); break;
			case 0: cout << "Saliendo..." << endl; pausa(); break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		};
	} while (opcion != 0);
}

void menuFuncionario() {
	int opcion;
	do {
		system("clear");
		cout << "Menu de Funcionario" << endl;
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
		cout << "0. Salir" << endl << endl;
		cout << "Seleccione una opcion: ";

		cin >> opcion;

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
			case 11: relojDelSistema();
			case 0: cout << "Saliendo..." << endl; pausa(); break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; pausa(); break;
		}
	} while (opcion != 0);
}

void pausa() {
	cout << endl << "Presione Enter para continuar...";
	// Limpiar el buffer de entrada para evitar que el siguiente cin se salte
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	// Esperar a que el usuario presione Enter
	cin.get();
}