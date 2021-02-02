#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

#include "Aeropuerto.h"
#include "Horario.h"
#include "Vuelo.h"

int main() {
    char option;

    do {

        cout << "Le damos la bienvenida, eliga la opción deseada" << endl << "1. Ver espacios disponibles" << endl <<
             "2. Cambiar vuelo" << endl << "3. Reservar asiento" << endl << "4. Crear vuelo" << endl << "5. Salir" <<
             endl << "Opción: ";

        cin >> option;

        switch (option) {

            case '1': {
                cout << "Pronto" << endl;
                break;
            }

            case '2': {
                cout << "soon" << endl;
                break;
            }

            case '5' :{
                cout << "Se eliminará toda la información entrada al salir del programa. Si desea continuar digite 5, "
                << "de lo contrario, digite otro número.";

                int confirma;

                cin >> confirma;

                if (confirma !=5){
                    option = '6';
                }

                break;
            }

            default: {
                cout << "Intente una opción diferente." << endl;
                break;
            }
        }


    } while (option != '5');


    return 0;
}