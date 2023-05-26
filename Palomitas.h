//
// Created by Maxime on 5/25/2023.
//
#include <iostream>
#include "Snack.h"
using namespace std;

#ifndef PROYECTO_CINE_2_PALOMITAS_H
#define PROYECTO_CINE_2_PALOMITAS_H



class Palomitas : public Snack { //crea clase
private:


public:
    Palomitas(string);
    //getters, regresan el valor del objeto para los parámetros especificados
    Palomitas();

};

Palomitas::Palomitas(string _tamano) : Snack(_tamano) { //constructor que recibe valores del usuario

}

Palomitas::Palomitas() : Snack() { //constructor que recibe valores del usuario

}

#endif //PROYECTO_CINE_2_PALOMITAS_H
