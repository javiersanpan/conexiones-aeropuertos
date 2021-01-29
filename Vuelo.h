#ifndef Aeropuerto_H
#define Aeropuerto_H

class Vuelo {

private:
// Atributos
  string numDeVuelo;
  string aeropuertoSalida;
  string aeropuertoDestino;

public:

// Constructores
  Vuelo();
  Vuelo(string nv, string as, string ad);

// Setters y getters
  void setNumDeVuelo(string nv);
  void setAeropuertoSalida(string as);
  void setAeropuertoDestino(string ad);

  string getNumDeVuelo();
  string getAeropuertoSalida();
  string getAeropuertoDestino();

// Otros métodos
};

#endif
