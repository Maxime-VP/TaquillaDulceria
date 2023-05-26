//
// Created by Maxime on 5/26/2023.
//

#ifndef PROYECTO_CINE_2_SNACK_H
#define PROYECTO_CINE_2_SNACK_H



//
// Created by Maxime on 5/25/2023.
//
#include <iostream>

using namespace std;

class Snack { //crea clase
protected:
    double costo;
    string tamano;

public:
    Snack(string);//constructor
    Snack();
    //getters, regresan el valor del objeto para los parámetros especificados
    string getTamano();
    double getCosto();
    void setCosto(string); // nnnn recibe string de tamano y pone un valor predeterminado
    void setTamano(string);
};

Snack::Snack(string _tamano) { //constructor que recibe valores del usuario
    tamano = _tamano;
}

Snack::Snack() { //constructor que recibe valores del usuario
    tamano = "Grande";
    costo = 89;
}

string Snack::getTamano() {
    return tamano;
}

double Snack::getCosto(){
    return costo;
}


void Snack:: setTamano(string _tamano) {
    tamano = _tamano;
}

void Snack:: setCosto(string _tamano) {
    if (_tamano == "grande" or _tamano == "Grande" or _tamano == "G" or _tamano == "g") {
        costo = 89;
    }
    if (_tamano == "mediano" or _tamano == "Mediano" or _tamano == "M" or _tamano == "m") {
        costo = 79;
    }
    if (_tamano == "chico" or _tamano == "Chico" or _tamano == "C" or _tamano == "c") {
        costo = 70;
    }
}

#endif //PROYECTO_CINE_2_SNACK_H