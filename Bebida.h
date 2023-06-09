#include <iostream>
#include "Snack.h"
using namespace std;

#ifndef PROYECTO_CINE_2_BEBIDA_H
#define PROYECTO_CINE_2_BEBIDA_H



class Bebida : public Snack { //crea clase
private:
//hereda los atributos de la clase padre

public:
    Bebida(string); //constructor
    Bebida(); //constructor default
    string Imprime(); //funcion imprime propia de la clase Bebida
};

Bebida::Bebida(string _tamano) : Snack(_tamano) { //constructor que recibe valores del usuario
//Cambia el costo depende del tamaño
}

Bebida::Bebida() : Snack() {
//default
}

string Bebida::Imprime(){ //regresa el tipo de objeto que es
    return "Bebida ";
}

#endif //PROYECTO_CINE_2_BEBIDA_H
