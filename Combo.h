//
// Created by Maxime on 5/26/2023.
//
#include "Palomitas.h"
#include "Bebida.h"

#ifndef PROYECTO_CINE_2_COMBO_H
#define PROYECTO_CINE_2_COMBO_H



// Created by Maxime on 5/25/2023.
//
#include <iostream>

using namespace std;

class Combo { //crea clase
protected:
    double precio; //atributo del combo para tener un costo distinto al de los productos por su cuenta
    Palomitas palomitas; //atributo del tipo objeto de clase Palomitas
    Bebida bebida;


public:
   Combo();
   virtual double getCosto();
   virtual string Imprime();
   virtual void setCosto();
};

Combo::Combo() { //constructor que recibe valores del usuario

    palomitas = Palomitas();
    bebida = Bebida();
    precio = palomitas.getCosto() + bebida.getCosto() - 50;

}

double Combo::getCosto(){
    return precio;
}

string Combo::Imprime() {
    return "Combo";
}

void Combo:: setCosto() {
    precio = 148;
}


#endif //PROYECTO_CINE_2_COMBO_H