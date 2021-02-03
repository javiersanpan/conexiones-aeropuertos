#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Aeropuerto.h"
#include "Horario.h"
#include "Vuelo.h"

int main() {

    // Se le da las opciones al usuario
    char option;
    int confirma;

    do {

        cout << "Le damos la bienvenida, eliga la opción deseada" << endl << "1. Ver espacios disponibles" << endl <<
             "2. Cambiar vuelo" << endl << "3. Reservar asiento" << endl << "4. Crear vuelo" << endl << "5. Salir" <<
             endl << "Opción: ";

        cin >> option;

        switch (option) {

            case '1': {
                // Esta opción le muestra al usuario cuantos espacios disponibles hay a determinada hora
                cout << "Ver espacios disponibles" << endl;
                break;
            }

            case '2': {
                // Esta opción le permite al usuario cambiar el horario del vuelo
                cout << "Cambiar vuelo" << endl;
                break;
            }

            case '3': {
                // Esta opción le permite al usuario reservar un asiento
                cout << "Reservar asiento" << endl;
                break;
            }

            case '4': {
                // Esta opción le permite al usuario crear un nuevo vuelo
                cout << "Crear vuelo" << endl;
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