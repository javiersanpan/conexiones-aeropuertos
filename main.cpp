// Javier Sánchez Panduro
// TC1033 Proyecto Integrador
// Sistema para estar al tanto de la cantidad de aviones actualmente en el aeropuerto


#include <iostream>
using namespace std;

#include "Aeropuerto.h"
#include "Vuelo.h"

int main() {

    // Se le da las opciones al usuario
    char option;
    int confirma;
    int aeropuertoActual = 0;

    do {

        cout << "Le damos la bienvenida, eliga la opción deseada" << endl << "0. Registrar aeropuerto" << endl
        <<"1. Registrar vuelo" << endl <<"2. Ver espacios en aeropuerto" << endl << "3. Reservar asiento" << endl
        << "4. Información de un vuelo" << endl << "5. Salir" << endl << "Opción: ";

        cin >> option;

        switch (option) {

            case '0': {
                // Esta opción le muestra al usuario registrar un aeropuerto

                cout << "Registrar aeropuerto" << endl << "Puede registrar hasta 5 aeropuertos" << endl;

                Aeropuerto listaAeropuertos[10];

                if (aeropuertoActual > 4){
                    cout << "Lo siento, ha llegado al límite de aeropuertos" << endl;
                    break;
                }

                int cap;
                string nuovoNome, nuovaPositzione;

                cout << "¿Cuál es el nombre del aeropuerto?: ";
                cin >> nuovoNome;

                cout << "¿En qué ciudad está el aeropuerto?: ";
                cin >> nuovaPositzione;

                cout << "¿Cuál es la capacidad del aeropuerto?: ";
                cin >> cap;

                listaAeropuertos[aeropuertoActual].setcapacidad(cap);
                listaAeropuertos[aeropuertoActual].setespaciosDisponibles(cap);
                listaAeropuertos[aeropuertoActual].setnombre(nuovoNome);
                listaAeropuertos[aeropuertoActual].setubicacion(nuovaPositzione);

                cout << "Ha registrado exitosamente el aeropuerto " << listaAeropuertos[aeropuertoActual].getnombre()
                << ", ubicado en " << listaAeropuertos[aeropuertoActual].getubicacion() <<
                ". El código de este aeropuerto es: " << aeropuertoActual <<
                ". Necesitará ese número para interactuar con él." << endl << endl;

                aeropuertoActual++;

                break;
            }


            case '1': {
                // Esta opción le muestra al usuario registrar un vuelo
                cout << "Registar vuelo" << endl;
                break;
            }

            case '2': {
                // Esta opción le permite al usuario ver los espacios que quedan en un Aeropuerto
                cout << "Ver espacios en aeropuerto" << endl;
                break;
            }

            case '3': {
                // Esta opción le permite al usuario reservar un asiento
                cout << "Reservar asiento" << endl;
                break;
            }

            case '4': {
                // Muestra la información del vuelo seleccionado
                cout << "Info vuelo" << endl;
                break;
            }

            case '5' :{
                // Salir del programa
                cout << "Se eliminará toda la información entrada al salir del programa. Si desea continuar digite 5, "
                     << "de lo contrario, digite otro número.";

                cin >> confirma;

                if (confirma !=5){
                    option = '6';
                }

                break;
            }

            default: {
                // opción inválida
                cout << "Intente una opción diferente." << endl;
                break;
            }
        }

    } while (option != '5');

    return 0;
}
