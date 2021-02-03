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

    do {

        cout << "Le damos la bienvenida, eliga la opción deseada" << endl << "0. Registrar aeropuerto" << endl
        <<"1. Registrar vuelo" << endl <<"2. Ver espacios en aeropuerto" << endl << "3. Reservar asiento" << endl
        << "4. Volar" << endl << "5. Salir" << endl << "Opción: ";

        cin >> option;

        switch (option) {

            case '0': {
                // Esta opción le muestra al usuario registrar un aeropuerto
                cout << "Registrar aeropuerto" << endl;
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
                // Esta opción le permite al usuario quitar el avión de la salida, y ponerlo en el Aeropuerto de destino
                cout << "Volar" << endl;
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
