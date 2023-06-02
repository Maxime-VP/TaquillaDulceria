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
    ComboNachos();
    double getCosto();
    void setCosto();
    string Imprime();
    //getters, regresan el valor del objeto para los parámetros especificados


};

ComboNachos::ComboNachos() : Combo() {

}

string ComboNachos::Imprime() {
    return "Combo Nachos";
}


void ComboNachos:: setCosto() {
    precio = 148+20;
}

double ComboNachos::getCosto(){
    return precio;
}


#endif //PROYECTO_CINE_2_COMBONACHOS_H
