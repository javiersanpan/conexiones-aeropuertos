#ifndef CONEXIONES_AEROPUERTOS_BOLETO_H
#define CONEXIONES_AEROPUERTOS_BOLETO_H
using namespace std;
#include "Vuelo.h"

class Boleto {
private:
    // atributos
    string pasajero;
    Vuelo vuelo;
    string clase;

public:
    // constructores

    Boleto();
    Boleto(string pasajero, string clase, Vuelo vuelo);

    // getters y setters
    string getPasajero();
    Vuelo getvuelo();
    string getclase();

    void setPasajero(string pasajero);
    void setVuelo(Vuelo vuelo);
    void setclase(string clase);

    // otros métodos

    void cambiarNombreYClase(string pasajero, string clase);
    
};

Boleto::Boleto() {
    pasajero = "Sin nombre";
    vuelo = Vuelo();
    clase = "Turista";
}

Boleto::Boleto(string pasajero, string clase, Vuelo vuelo) {
    this->pasajero = pasajero;
    this->vuelo = vuelo;
    this->clase = clase;
}

string Boleto::getPasajero() {
    return std::string();
}

Vuelo Boleto::getvuelo() {
    return Vuelo();
}

string Boleto::getclase() {
    return std::string();
}

void Boleto::setPasajero(string pasajero) {
    this->pasajero = pasajero;
}

void Boleto::setVuelo(Vuelo vuelo) {
    this->vuelo = vuelo;
}

void Boleto::setclase(string clase) {
    this->clase = clase;
}

void Boleto::cambiarNombreYClase(string pasajero, string clase) {
    this->clase = clase;
    this->pasajero = pasajero;
}

#endif //CONEXIONES_AEROPUERTOS_BOLETO_H