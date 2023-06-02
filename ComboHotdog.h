//
// Created by Maxime on 6/1/2023.
//

#ifndef PROYECTO_CINE_2_COMBOHOTDOG_H
#define PROYECTO_CINE_2_COMBOHOTDOG_H
#include <iostream>
#include "Combo.h"
using namespace std;

class ComboHotdog : public Combo { //crea clase
private:

public:
    ComboHotdog();
    double getCosto();
    void setCosto();
    string Imprime();
    //getters, regresan el valor del objeto para los parámetros especificados


};

ComboHotdog::ComboHotdog(): Combo() { //constructor que recibe valores del usuario

}

string ComboHotdog::Imprime(){
    return "Combo Hotdog ";

}

void ComboHotdog:: setCosto() {
    precio = 148+30;
}

double ComboHotdog::getCosto(){
    return precio;
}

#endif //PROYECTO_CINE_2_COMBOHOTDOG_H
