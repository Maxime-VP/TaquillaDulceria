

/*
 * Proyecto TaquillaDulceria clase Cuenta
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Esta clase define el objeto de tipo Cuenta que contiene listas de apuntadores en las cuales se almacenan objetos de
 * las clases Combo y Snack
 *
 * Contiene funciones para agregar objetos a sus listas y para imprimir todos los productos guardados, sus costos y el
 * total
 *
*/

#ifndef PROYECTO_CINE_2_CUENTA_H
#define PROYECTO_CINE_2_CUENTA_H
#include <iostream>
#include "Palomitas.h"
#include "Bebida.h"
#include "Combo.h"
#include "Snack.h"
#include "ComboNachos.h"
#include "ComboHotdog.h"
using namespace std;

class Cuenta {
private:
    Combo *comboPtr[15]; // se crea un arreglo de apuntadores tipo Combo
    Snack *botana[15]; // se crea arreglo de apuntadores tipo Snack
    //Son apuntadores de dos clases padres distintas pues la clase combo contiene objetos de tipo snack

    int i=0, c=0;
    //i se usa como iterador para un ciclo for de objetos Snack
    //c es la variable para ciclo para el for de objetos Combo

    double total, mensajeP; //total es para sumar todos los totales
    //mensajeP recibe el costo de cada articulo dentro de la cuenta

    string mensaje;

public:

/**
 * agregaCNachos crea un objeto ComboNachos y lo agrega a
 * un arreglo de objetos Combo
 *
 * crea un objeto ComboNachos y lo agrega al arreglo de objetos Combo usando como
 * indice c, el cuál después incrementa en 1.
 *
 * @param
 * @return
 */
    void agregaCNachos(){
        comboPtr[c]= new ComboNachos();

        comboPtr[c] ->setCosto(); //asigna el costo del combo dependiendo de su tipo
        cout << comboPtr[c] ->Imprime() << " " << comboPtr[c] ->getCosto() << " " << "$" << endl;
        //imprime el tipo de combo y el costo del mismo

        total = total + comboPtr[c] ->getCosto(); //suma el costo del producto al total

        c=c+1;
    };

    /**
 * agregaCHotdog crea un objeto ComboHotdog y lo agrega a
 * un arreglo de objetos Combo
 *
 * crea un objeto ComboHotdog y lo agrega al arreglo de objetos Combo usando como
 * indice c, el cuál después incrementa en 1.
 *
 * @param
 * @return
 */
    void agregaCHotdog(){
        comboPtr[c]= new ComboHotdog();

        comboPtr[c] ->setCosto(); //asigna el costo del combo dependiendo de su tipo
        cout << comboPtr[c] ->Imprime() << " " << comboPtr[c] ->getCosto() << " " << "$" << endl;
        //imprime el tipo de combo y el costo del mismo

        total = total + comboPtr[c] ->getCosto(); //suma el costo del producto al total

        c=c+1;
    };

    /**
* agregaBebida crea un objeto Bebida y lo agrega a
* un arreglo de objetos Snack
*
* crea un objeto Bebida y lo agrega al arreglo de objetos Snack usando como
* indice i, el cuál después incrementa en 1.
*
* @param string _tamano debe ser "Grande", "Mediano", "Chico"
* @return
*/
    void agregaBebida(string _tamano){
        botana[i]= new Bebida(_tamano); //se guarda bebida en una lista de apuntadores
        botana[i] ->setCosto(_tamano);

        //imprime el tipo, el tamano y el costo del objeto
        cout << "Bebida tamano " << botana[i] ->getTamano() << " " << botana[i] ->getCosto() << "$" << endl;
        total = total + botana[i] ->getCosto(); //suma el costo del producto al total

        i=i+1;
    };

    /**
* agregaPalomitas crea un objeto Palomitas y lo agrega a
* un arreglo de objetos Snack
*
* crea un objeto Palomitas y lo agrega al arreglo de objetos Snack usando como
* indice i, el cuál después incrementa en 1.
*
* @param string _tamano debe ser "Grande", "Mediano", "Chico"
* @return
*/
    void agregaPalomitas(string _tamano){
        //botana[i] nos permite crear multiples instancias de palomitas o referescos y acceder a ellas después
        botana[i]= new Palomitas(_tamano);
        botana[i] ->setCosto(_tamano);

        //imprime tipo, tamano y costo del objeto creado
        cout << "Palomitas tamano " << botana[i] ->getTamano() << " " << botana[i] ->getCosto() << "$" << endl;
        total = total + botana[i] ->getCosto(); //suma el costo del producto al total

        i=i+1;
    };

    void imprimeCostoT();

};

/**
 * ImprimeCostoT imprime el costo total de todos los objetos de tipo
 * Combo y/o Snack contenidos en los arreglos de Cuenta
 *
 * Si c es diferente a 0, imprime todos los objetos Combo almacenados (tipo de Combo y sus precios)
 * Si i es diferente a 0, imprime todos los objetos Snack almacenados (tipo de Snack, tamano y sus costos)
 * Suma los costos y precios de todos los objetos almacenados e imprime el total
 *
 * @param
 * @return
 */
void Cuenta::imprimeCostoT() {

    if (c !=0){
        for (int b=0; b<c; b++){
            mensaje = comboPtr[b]->Imprime();
            mensajeP = comboPtr[b]->getCosto();
            cout << mensaje << "  " << mensajeP << "\n";
        }
    }
    //imprime todos los objetos de las listas tipo Snack y su precio
    // siempre y cuando se haya creado algun objeto Snack
    if (i !=0){
        for (int a=0; a<i; a++){
            mensaje = botana[a]->Imprime();
            mensajeP = botana[a]->getCosto();
            cout << mensaje << "  "<< botana[a]->getTamano()<< " " << mensajeP << "\n";
        }
    }
    cout << "\nEl total es " << total<<"$"; //imprime el total
}



#endif //PROYECTO_CINE_2_CUENTA_H
