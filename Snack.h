
/*
 * Proyecto TaquillaDulceria clase Snack
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Esta clase define el objeto de tipo Snack, que hereda sus propiedades a las clases hijas Palomitas y Bebida
 * Contiene funciones para definir su precio dependiendo del tamaño, y para regresar el tamano como el Costo
 *
*/

#ifndef PROYECTO_CINE_2_SNACK_H
#define PROYECTO_CINE_2_SNACK_H
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

//constructor que recibe valores del usuario, los valores de tamano se predefinen para que haya consistencia al
// imprimir el tamano
Snack::Snack(string _tamano) {

    if (_tamano == "grande" or _tamano == "Grande" or _tamano == "G" or _tamano == "g") {
        tamano = "Grande";
    }
    if (_tamano == "mediano" or _tamano == "Mediano" or _tamano == "M" or _tamano == "m") {
        tamano = "Mediano";
    }
    if (_tamano == "chico" or _tamano == "Chico" or _tamano == "C" or _tamano == "c") {
        tamano = "Chico";
    }

}

Snack::Snack() { //constructor que no recibe valores del usuario
    tamano = "Grande";
    costo = 89;
}

/**
 * getTamano regresa el atributo tamano del objeto Snack
 *
 * @param
 * @return string con el tamano del objeto Snack
 */
string Snack::getTamano() {
    return tamano;
}


/**
 * getCosto regressa el atributo costo del objeto Snack
 *
 * @param
 * @return double con el costo del objeto Snack
 */
double Snack::getCosto(){
    return costo;
}


/**
 * setCosto asigna un valor al atributo costo dependiendo el tamano del mismo
 *
 * @param string _tamano debe ser "Grande", "Mediano", "Chico"
 * @return
 */

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