
/*
 * Proyecto TaquillaDulceria clase Palomitas
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Esta clase define el objeto de tipo Palomitas, que hereda de la clase padre Snack
 * Tiene una funcion para regresar el tipo de Snack que es
 *
*/

#ifndef PROYECTO_CINE_2_PALOMITAS_H
#define PROYECTO_CINE_2_PALOMITAS_H
#include <iostream>
#include "Snack.h"
using namespace std;



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

/**
 * Imprime regresa el tipo de snack que es el objeto de tipo Palomitas
 *
 * @param
 * @return string con el texto "Palomitas"
 */
string Palomitas::Imprime(){ //imprime el objeto que es
    return "Palomitas ";
}

#endif //PROYECTO_CINE_2_PALOMITAS_Hl
