#include <__bit_reference>
// Javier Sánchez Panduro
// TC1033 Proyecto Integrador
// Sistema para estar al tanto de la cantidad de aviones actualmente en el aeropuerto


#include <iostream>
using namespace std;

#include "Aeropuerto.h"
#include "Vuelo.h"
#include "Boleto.h"

int main() {

    // Se le da las opciones al usuario
    char option;
    int confirma;
    int aeropuertoActual = 0;
    int vueloActual = 0;
    int boletoActual = 0;

    Aeropuerto listaAeropuertos[5];
    Vuelo listaVuelos[50];
    Boleto listaBoletos[500];

    do {

        cout << endl;

        cout << "Le damos la bienvenida, eliga la opción deseada" << endl << "0. Registrar aeropuerto" << endl
        <<"1. Registrar vuelo" << endl <<"2. Información de un aeropuerto" << endl << "3. Reservar asiento" << endl
        << "4. Información de un vuelo" << endl << "5. Salir" << endl << "Opción: ";

        cin >> option;

        switch (option) {

            case '0': {
                // Esta opción le muestra al usuario registrar un aeropuerto

                cout << "Registrar aeropuerto" << endl << "Puede registrar hasta 5 aeropuertos" << endl;

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

                if (aeropuertoActual == 0) {
                    cout << "Necesita crear un aeropuerto antes de poder crear un vuelo." << endl;
                    break;
                }

                if (aeropuertoActual > 49) {
                    cout << "Ha llegado al límite de vuelos permitidos" << endl;
                }

                string NewnVuelo;
                string Newdestino;
                string NewhoraSalida;
                int NewasientosDisponibles, elCodigoDe;
                Aeropuerto Newsalida;

                cout << "¿Cuál es el código del aeropuerto de salida?";
                cin >> elCodigoDe;

                if (elCodigoDe >= aeropuertoActual) {
                    cout << "Tienes usar el número de aeropuerto proporcionado al momento de crearlo para continuar" << endl;
                    break;
                }

                if (listaAeropuertos[elCodigoDe].getespaciosDisponibles() <= 0){
                    cout << "Este aeropuerto ya no tiene espacios disponibles";
                    break;
                }

                listaAeropuertos[elCodigoDe].setespaciosDisponibles(listaAeropuertos[elCodigoDe].getespaciosDisponibles() -1);

                listaVuelos[vueloActual].setSalida(listaAeropuertos[elCodigoDe]);

                cout << endl << "Se registrará un nuevo vuelo" << endl;

                cout << "¿Cuál es el número de vuelo?: ";
                cin >> NewnVuelo;

                listaVuelos[vueloActual].setNVuelo(NewnVuelo);

                cout << "¿Cuál es el destino?: ";
                cin >> Newdestino;

                listaVuelos[vueloActual].setDestino(Newdestino);

                cout << "¿Cuál es la hora de salida?: ";
                cin >> NewhoraSalida;

                listaVuelos[vueloActual].setHoraSalida(NewhoraSalida);

                cout << "¿Cuántos asientos tiene el avión?: ";
                cin >> NewasientosDisponibles;

                listaVuelos[vueloActual].setAsientosDisponibles(NewasientosDisponibles);

                cout << "Se registró el vuelo " << listaVuelos[vueloActual].getNVuelo() << ", con destino a "
                << listaVuelos[vueloActual].getDestino() << ", saliendo de " << listaVuelos[vueloActual].getSalida().getnombre()
                << " " << listaVuelos[vueloActual].getSalida().getubicacion() << " con el código de vuelo: " << vueloActual;


                vueloActual++;
                break;
            }

            case '2': {
                // Esta opción le permite al usuario ver los espacios que quedan en un Aeropuerto, y otra información.
                cout << "Información de un aeropuerto" << endl;

                int aerAver;

                cout << "¿Qué aeropuerto quiere consultar? Ingrese el código: ";
                cin >>aerAver;

                if (aerAver >= aeropuertoActual) {
                    cout << "Ese aeropuerto no está registrado";
                    break;
                }

                char optCon;

                cout << "¿Qué quiere consultar?" << endl << "1. Espacios disponibles" << endl << "2. Ubicación"
                << endl << "3. Vaciar aeropuerto";
                cin >> optCon;
                switch (optCon) {
                    case '1': {
                        cout << "En el aeropuerto " << listaAeropuertos[aerAver].getnombre() << " quedan " <<
                        listaAeropuertos[aerAver].getespaciosDisponibles() << " espacios disponibles.";
                        break;
                    }

                    case '2': {
                        cout << "El aeropuerto " << listaAeropuertos[aerAver].getnombre() << " está en " <<
                             listaAeropuertos[aerAver].getubicacion() << ".";
                        break;
                    }

                    case '3':{
                        cout << "Se va a vaciar el aeropuerto, regresando sus espacios disponibles a su capacidad.";
                        listaAeropuertos[aerAver].vaciarAeropuerto();
                        break;
                    }
                    default:{
                        cout << "Opción inválida" << endl;
                    }
                }

                break;
            }

            case '3': {
                // Esta opción le permite al usuario reservar un asiento
                cout << "Reservar asiento" << endl;

                int nReservarVuelo;

                cout << "Ingrese el código del vuelo que se va a reservar: ";
                cin >> nReservarVuelo;

                if (nReservarVuelo >= vueloActual) {
                    cout << "Ese vuelo no existe, asegurate de usar el código que se proporcionó cuando se creó el aeropuerto";
                    break;
                }

                if (listaVuelos[nReservarVuelo].getAsientosDisponibles() <= 0) {
                    cout << "Lo siento, ya no hay asientos disponibles en este vuelo.";
                    break;
                }

                listaVuelos[nReservarVuelo].reservarAsientos(1);

                string nameofpas;
                cout << "¿Cúal es el nombre del pasajero?: ";
                cin >> nameofpas;
                listaBoletos[boletoActual].setPasajero(nameofpas);

                string laclassavoler;
                cout << "¿En qué clase le gustaría volar?: ";
                cin >> laclassavoler;
                listaBoletos[boletoActual].setclase(laclassavoler);

                listaBoletos[boletoActual].setVuelo(listaVuelos[nReservarVuelo]);

                cout << "Se ha registrado el boleto a nombre de " << listaBoletos[boletoActual].getPasajero()
                << " en clase " << listaBoletos[boletoActual].getclase() << " para el vuelo " <<
                listaBoletos[boletoActual].getvuelo().getNVuelo() << " con destino a " <<
                listaBoletos[boletoActual].getvuelo().getDestino() << endl;

                boletoActual++;
                break;
            }

            case '4': {
                // Muestra la información del vuelo seleccionado
                cout << "Información de un vuelo" << endl;

                int codVuel;

                cout << "Ingrese el código del vuelo que quiere consultar: ";
                cin >> codVuel;

                if (codVuel >= vueloActual){
                    cout << "Ese es no es un código de vuelo válido." << endl;
                    break;
                }

                char newOptionD;

                cout << "¿Qué desea hacer?" << endl << "1. Ver número de vuelo" << endl << "2. Consultar destino y salida"
                << endl << "3. Ver hora de salida" << "4. Cambiar nombre y clase de un boleto" << endl
                << "5. Consultar asientos disponibles" << endl;

                cin >> newOptionD;

                switch (newOptionD) {
                    case '1':{
                        cout << "El número de vuelo es " << listaVuelos[codVuel].getNVuelo() << endl;
                        break;
                    }

                    case '2':{
                        cout << "El destino del vuelo es " << listaVuelos[codVuel].getDestino() << ", y sale de "
                        << listaVuelos[codVuel].getSalida().getubicacion() << endl;
                        break;
                    }

                    case '3':{
                        cout << "El vuelo sale a las " << listaVuelos[codVuel].getHoraSalida() << endl;
                        break;
                    }

                    case '4':{
                        int newCodigoTemp;

                        cout << "Ingrese el código del boelto que quiere cambiar: ";
                        cin >> newCodigoTemp;

                        if (newCodigoTemp >= boletoActual){
                            cout << "Ese boleto no existe" << endl;
                            break;
                        }

                        string nuevNommm, nuevClassssss;

                        cout << "Nuevo nombre: ";
                        cin >> nuevNommm;

                        cout << "Nueva clase";
                        cin >> nuevClassssss;

                        listaBoletos[newCodigoTemp].cambiarNombreYClase(nuevNommm, nuevClassssss);

                        cout << "¡Listo!" << endl;

                        break;
                    }

                    case '5':{
                        cout << "Quedan  " << listaVuelos[codVuel].getAsientosDisponibles() << " asientos disponibles."
                        << endl;
                        break;
                    }


                    default:{
                        cout << "Esa no es una opción válida" << endl;
                        break;
                    }
                }

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