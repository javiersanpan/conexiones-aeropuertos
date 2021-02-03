#ifndef CONEXIONES_AEROPUERTOS_AEROPUERTO_H
#define CONEXIONES_AEROPUERTOS_AEROPUERTO_H

class Aeropuerto {
private:
    
    // atributos
    
    std::string nombre;
    std::string ubicacion;
    int capacidad;
    int espaciosDisponibles;
    
public:
    
    // constructores
    
    Aeropuerto();
    Aeropuerto(std::string nombre, std::string ubicacion, int capacidad, int espaciosDisponibles);
    
    // setters y getters

    std::string getnombre();
    std::string getubicacion();
    int getcapacidad();
    int getespaciosDisponibles();

    void setnombre(std::string nombre);
    void setubicacion(std::string ubicacion);
    void setcapacidad(int capacidad);
    void setespaciosDisponibles(int espaciosDisponibles);
    
    // otros métodos
    
    void vaciarAeropuerto();
    
};


// constructores

Aeropuerto::Aeropuerto(){
    nombre = "NNN";
    ubicacion = "NNN";
    capacidad = 0;
    espaciosDisponibles = 0;
}

Aeropuerto::Aeropuerto(std::string nombre, std::string ubicacion, int capacidad, int espaciosDisponibles){
    this->nombre = nombre;
    this->ubicacion = ubicacion;
    this->capacidad = capacidad;
    this->espaciosDisponibles = espaciosDisponibles;
}

// getters y setters

std::string Aeropuerto::getnombre(){
    return nombre;
}
std::string Aeropuerto::getubicacion(){
    return ubicacion;
}
int Aeropuerto::getcapacidad(){
    return capacidad;
}
int Aeropuerto::getespaciosDisponibles(){
    return espaciosDisponibles;
}

void Aeropuerto::setnombre(std::string nombre){
    this->nombre = nombre;
}
void Aeropuerto::setubicacion(std::string ubicacion){
    this->ubicacion = ubicacion;
}
void Aeropuerto::setcapacidad(int capacidad){
    this->capacidad = capacidad;
}
void Aeropuerto::setespaciosDisponibles(int espaciosDisponibles){
    this->espaciosDisponibles = espaciosDisponibles;
}

// otros métodos

void Aeropuerto::vaciarAeropuerto(){
    espaciosDisponibles = capacidad;
}

#endif
