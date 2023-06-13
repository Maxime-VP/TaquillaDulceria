/*
 * Proyecto TaquillaDulceria clase ComboHotdog
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Esta clase define el objeto de tipo ComboHotdog, que hereda de la clase padre Combo
 * Contiene funciones para definir su precio y regresar el tipo de combo que es
 *
*/

#ifndef PROYECTO_CINE_2_COMBOHOTDOG_H
#define PROYECTO_CINE_2_COMBOHOTDOG_H
#include <iostream>
#include "Combo.h"
using namespace std;

class ComboHotdog : public Combo { //crea clase
private:

public:
    ComboHotdog(); //constructor
    void setCosto();//funcion para darle un costo propio a ComboHotdog
    string Imprime(); //funcion para imprimir el tipo de combo que es
};

ComboHotdog::ComboHotdog(): Combo() { //constructor default
}

string ComboHotdog::Imprime(){ //funcion para imprimir el tipo de combo que es
    return "Combo Hotdog ";

}

void ComboHotdog:: setCosto() { //funcion para darle un costo propio a ComboHotdog
    precio = precio + 55;
}

#endif //PROYECTO_CINE_2_COMBOHOTDOG_H
