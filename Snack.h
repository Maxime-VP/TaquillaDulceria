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
    double costo; //atributos
    string tamano;

public:
    Snack(string);//constructor
    Snack(); //constructor default que se usa cuando se crea directamente en combo

    //getters, regresan el valor del objeto para los parámetros especificados
    string getTamano();
    double getCosto();

    void setCosto(string); //recibe string de tamano y pone un valor predeterminado
    virtual string Imprime() =0 ; //abstract, permite utilizar las funciones de las clases hijas

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

void Snack:: setCosto(string _tamano) { //asigna un valor al costo dependiendo del tamano
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

//No se requiere la siguiente función debido a que es un abstract:
//string Snack::Imprime(){
//    return "Snack ";
//}


#endif //PROYECTO_CINE_2_SNACK_H