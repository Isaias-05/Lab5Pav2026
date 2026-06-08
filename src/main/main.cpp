#include <iostream>

#include "Fabrica.h"

//Obligatorios
#include "IControladorIniciarSesion.h"
#include "IControladorCerrarSesion.h"
#include "IControladorRegistrarLector.h"
#include "IControladorRegistrarFuncionario.h"
#include "IControladorRegistrarMaterial.h"
#include "IControladorRegistrarPrestamo.h"
#include "IControladorConsultarPrestamosDeLector.h"
#include "IControladorVerInformacionDeMaterial.h"

//Opcionales
#include "IControladorPuntuarMaterial.h"
#include "IControladorConsultarPuntajesDeMaterial.h"
#include "IControladorEliminarLector.h"
#include "IControladorEliminarMaterial.h"

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

void menu();

//Implementación de funciones

void menu() {
	int opcion;
	do {
		system("clear");
		cout << "Menu Principal:" << endl;
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
			case 6: registrarPrestamo(); break;
			case 7: consultarPrestamosDeLector(); break;
			case 8: verInformacionDeMaterial(); break;
			case 9: puntuarMaterial(); break;
			case 10: consultarPuntajesDeMaterial(); break;
			case 11: eliminarLector(); break;
			case 12: eliminarMaterial(); break;
			case 0: cout << "Saliendo..." << endl; break;
			default: cout << "Opcion invalida, intente nuevamente." << endl; break;
		}
	} while (opcion != 0);
}



int main() {
	std::cout << "Proyecto compilado correctamente" << std::endl;

	menu();
	return 0;
}
