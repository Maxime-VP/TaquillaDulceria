//
// Created by Maxime on 6/1/2023.
//

#ifndef PROYECTO_CINE_2_COMBONACHOS_H
#define PROYECTO_CINE_2_COMBONACHOS_H
#include <iostream>
#include "Combo.h"
using namespace std;

class ComboNachos : public Combo { //crea clase
private:

public:
    ComboNachos(); //constructor
    void setCosto(); //funcion para darle un costo propio a ComboNachos
    string Imprime(); //funcion para imprimir el tipo de combo que es
};

ComboNachos::ComboNachos() : Combo() { //constructor default
}

string ComboNachos::Imprime() {//funcion para imprimir el tipo de combo que es
    return "Combo Nachos";
}

void ComboNachos:: setCosto() { //funcion para darle un costo propio a ComboNachos
    precio = precio +40;
}




#endif //PROYECTO_CINE_2_COMBONACHOS_H
