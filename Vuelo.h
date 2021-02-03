#ifndef CONEXIONES_AEROPUERTOS_VUELO_H
#define CONEXIONES_AEROPUERTOS_VUELO_H

class Vuelo{
private:

    // atributos

    std::string nVuelo;
    std::string destino;
    std::string salida;
    std::string horaSalida;
    int asientosDisponibles;

public:

    // constructores
    
    Vuelo();
    Vuelo(std::string nVuelo, std::string destino, std::string salida, std::string horaSalida, int asientosDisponibles);
    
    
    // getters

    std::string getNVuelo();
    std::string getSalida();
    std::string getDestino();
    std::string getHoraSalida();
    int getAsientosDisponibles();


    // setters

    void setNVuelo(std::string nVuelo);
    void setDestino(std::string destino);
    void setSalida(std::string salida);
    void setHoraSalida(std::string horaSalida);
    void setAsientosDisponibles(int asientosDisponibles);

    // otros métodos

    void reservarAsientos(int cantidad);
};

// constructores

Vuelo::Vuelo() {
    nVuelo = "AAA000";
    destino = "NO";
    salida = "NO";
    horaSalida = "00:00";
    asientosDisponibles = 0;
}


Vuelo::Vuelo(std::string nVuelo, std::string destino, std::string salida, std::string horaSalida,
             int asientosDisponibles) {
    this->nVuelo = nVuelo;
    this->destino = (destino);
    this->salida = salida;
    this->horaSalida = horaSalida;
    this->asientosDisponibles = asientosDisponibles;
}

// getters

std::string Vuelo::getNVuelo() {
    return std::string();
}

 std::string Vuelo::getSalida()  {
    return salida;
}

 std::string Vuelo::getDestino()  {
    return destino;
}

std::string Vuelo::getHoraSalida()  {
    return horaSalida;
}

int Vuelo::getAsientosDisponibles() {
    return asientosDisponibles;
}

// setters

void Vuelo::setNVuelo(std::string nVuelo) {
    this->nVuelo = nVuelo;
}

void Vuelo::setDestino(std::string destino) {
    this->destino = destino;
}

void Vuelo::setSalida(std::string salida) {
    this->salida = salida;
}

void Vuelo::setHoraSalida(std::string horaSalida) {
    this->horaSalida = horaSalida;
}

void Vuelo::setAsientosDisponibles(int asientosDisponibles) {
    this->asientosDisponibles = asientosDisponibles;
}

// otros métodos

void Vuelo::reservarAsientos(int cantidad){
    asientosDisponibles = asientosDisponibles - cantidad;
}

#endif
