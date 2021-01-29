#ifndef Aeropuerto_H
#define Aeropuerto_H

#include "Vuelo.h"

// Atributos
//string numDeVuelo;
//string aeropuertoSalida;
//string aeropuertoDestino;

// Constructores
Vuelo::Vuelo(){
  numDeVuelo = "AAA000";
  aeropuertoSalida = "ZZZ";
  aeropuertoDestino = "AAA";
}

Vuelo::Vuelo(string nv, string as, string ad){

}

// Setters y getters
void Vuelo::setNumDeVuelo(string nv){
  numDeVuelo = nv;
}

void Vuelo::setAeropuertoSalida(string as){
  aeropuertoSalida = as;
}

void Vuelo::setAeropuertoDestino(string ad){
  aeropuertoDestino = ad;
}


string Vuelo::getNumDeVuelo(){
  return numDeVuelo;
}

string Vuelo::getAeropuertoSalida(){
  return aeropuertoSalida;
}

string Vuelo::getAeropuertoDestino(){
  return aeropuertoDestino;
}

#endif
