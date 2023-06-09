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
    Bebida bebida; // objeto tipo bebida

public:
   Combo(); //Constructor
   double getCosto(); //función que regresa el costo y no es diferente en las clases hijas
   virtual string Imprime() = 0; //abstract permite usar las funciones de las clases hijas
   virtual void setCosto() = 0; //abstract permite usar las funciones de las clases hijas
};

Combo::Combo() { //constructor que recibe valores del usuario

    //agrega objetos default a la clase combo
    palomitas = Palomitas();
    bebida = Bebida();

    //Se utilizan los costos de los objetos para que se autoajuste el costo del combo si cambian
    precio = palomitas.getCosto() + bebida.getCosto() - 50;

}

double Combo::getCosto(){ //regresa el precio/costo del combo
    return precio;
}

//Las siguientes dos funciones comentadas, se eliminaron al usar el abstract

//string Combo::Imprime() {
//    return "Combo";
//}

//void Combo:: setCosto() {
//    precio = 138;
//}


#endif //PROYECTO_CINE_2_COMBO_H