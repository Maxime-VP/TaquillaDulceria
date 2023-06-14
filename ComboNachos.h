
/*
 * Proyecto TaquillaDulceria clase ComboNachos
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Esta clase define el objeto de tipo ComboNachos, que hereda de la clase padre Combo
 * Contiene funciones para definir su precio y regresar el tipo de combo que es
 *
*/

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
/**
 * Imprime regresa el tipo de combo que es el objeto de tipo ComboNachos
 *
 * @param
 * @return string con el texto "Combo Nachos"
 */
string ComboNachos::Imprime() {//funcion para imprimir el tipo de combo que es
    return "Combo Nachos";
}

/**
 * setCosto asigna el valor del atributo precio del objeto de tipo ComboNachos
 *
 * @param
 * @return
 */
void ComboNachos:: setCosto() { //funcion para darle un costo propio a ComboNachos
    precio = precio +40;
}




#endif //PROYECTO_CINE_2_COMBONACHOS_H
