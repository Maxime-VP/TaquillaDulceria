#include <iostream>
#include "Snack.h"
using namespace std;

#ifndef PROYECTO_CINE_2_BEBIDA_H
#define PROYECTO_CINE_2_BEBIDA_H



class Bebida : public Snack { //crea clase
private:


public:
    Bebida(string);
    Bebida();
    //getters, regresan el valor del objeto para los parámetros especificados


};

Bebida::Bebida(string _tamano) : Snack(_tamano) { //constructor que recibe valores del usuario

}

Bebida::Bebida() : Snack() { //constructor que recibe valores del usuario

}

#endif //PROYECTO_CINE_2_BEBIDA_H
