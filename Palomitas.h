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
//esta vacio pues recibe sus atributos de la clase padre

public:
    Palomitas(string); //constructor
    Palomitas(); //constructor default

    //funcion imprime propia de la clase hija Palomitas
    string Imprime();
};

Palomitas::Palomitas(string _tamano) : Snack(_tamano) { //constructor que recibe valores del usuario
//crea palomitas con un tamaño seleccionado, lo cual cambiará el costo acorde
}

Palomitas::Palomitas() : Snack() {
//crea palomitas con constructores default
}

string Palomitas::Imprime(){ //imprime el objeto que es
    return "Palomitas ";
}

#endif //PROYECTO_CINE_2_PALOMITAS_Hl
