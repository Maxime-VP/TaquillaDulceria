
/*
 * Proyecto TaquillaDulceria main
 * Maxime Vilcocq Parra
 * A01710550
 * 13/6/2023
 *
 * Este es un programa que recibe instrucciones del usuario para agregar productos a su cuenta, calcular su total e
 * imprimir su tiquet al final de la operación.
*/


#include <iostream>
#include "Cuenta.h"

using namespace std;

//Función menu que imprime las diferentes opciones que se pueden utilizar
void menu(){
    cout << "(1) Combo \n(2) Palomitas \n(3) Refresco \n" << endl;
}

//Función que recibe un valor de tamaño
//Se usa cuando el usuario pide una bebida o unas palomitas
string tamanoOrden() {
    string _tamano;
    cout << "De que tamano? (Grande, Mediano, Chico)" << endl;
    cin >> _tamano; //lee _tamano del usuario
    return _tamano; //regresa _tamano
}

int main() {

    Cuenta cuent;
    double total;

    cout << "Bienvenido al Cine, que desea ordenar? \n";

    //mover i a cuenta
    int i = 0, v=0, c=0;
    //i cuenta objetos snack para evitar que se salgan de los límites
    //c cuenta objetos Combo para evitar que se salgan de los límites
    //v es la variable que uso para validar

    string orden, _tamano, respuesta;
    //orden recibe la elección del usuario respecto a las opciones de la función menu
    //_tamano se usa en el constructor de ambos objetos de tipo snack y en su función setCosto
    //respuesta se utiliza parar saber si el usuario desea ordenar algo más o terminar el programa

    string tipo;
    //tipo recibe el tipo de combo que quiere el usuario Nacho o Hotdog

    while (v == 0) {  //corre el código hasta que se utilice uno de los 3 valores aceptados
        menu(); //imprime el menu

        cin >> orden;

        if (orden == "1") { //valida la eleccion del usuario


            // Este segmento recibe la eleccion de tipo de combo
            cout << "Escriba (Nacho) para Combo nachos o (Hotdog) para Combo hotdog \n";
            cin >> tipo;
            //Este segmento asigna el Combo elegido a el espacio de la lista de apuntadores de combo actual
            if (tipo=="Nacho"){
                cuent.agregaCNachos(); //agrega objeto default de ComboNachos a cuent
            }
            if (tipo=="Hotdog"){
                cuent.agregaCHotdog(); //agrega objeto default de ComboHotdog a cuent
            }

            //cuando c llega al límite de objetos permitidos termina el programa
            //esto es para evitar guardar datos fuera de la lista de apuntadores
            if (c>13){
                cout << "Ha llegado al limite de productos combo \n";
                respuesta = "No";
                //usa un string en lugar de un break para que el resto del código se corra con normalidad
            }
            //si aún hay espacio en la lista corre normalmente
            else {
                cout << "Desea algo mas? (Si, No) \n";
                cin >> respuesta;
            }

            c= c++; //se usa para terminar la función cuando se acaban los espacios en las listas de cuent

            //valida si se desea ordenar algo más
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0; //mantiene v igual y continua el ciclo
            }
            else {
                cout << "\n";
                cuent.imprimeCostoT();//imprime lo contenido en la cuenta
                break; //termina el programa
            }

        }

        if (orden == "2") { //valida la eleccion del usuario

            // Este segmento recibe la eleccion de tamaño
            _tamano = tamanoOrden();

            cuent.agregaPalomitas(_tamano);

            //cuando c llega al límite de objetos permitidos termina el programa
            //esto es para evitar guardar datos fuera de la lista de apuntadores
            if (i>13){
                cout << "Ha llegado al limite de productos Snack \n";
                respuesta = "No";
                //usa un string en lugar de un break para que el resto del código se corra con normalidad
            }
                //si aún hay espacio en la lista corre normalmente
            else {
                cout << "Desea algo mas? (Si, No) \n";
                cin >> respuesta;
            }

            i= i + 1;

            //sigue el ciclo si dice si
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            //de otra forma imprime los objetos, sus precios y el total
            else {
                cout << "\n";
                cuent.imprimeCostoT(); //imprime lo acumulado en cuenta
                break;
            }
        }

        if (orden == "3") { //valida la eleccion del usuario

            //Este segmento recibe la eleccion de tamaño
            _tamano = tamanoOrden();
            //Este segmento asigna el costo del producto dependiendo del tamaño

            cuent.agregaBebida(_tamano);

            //cuando c llega al límite de objetos permitidos termina el programa
            //esto es para evitar guardar datos fuera de la lista de apuntadores
            if (i>13){
                cout << "Ha llegado al limite de productos Snack \n";
                respuesta = "No";
                //usa un string en lugar de un break para que el resto del código se corra con normalidad
            }
                //si aún hay espacio en la lista corre normalmente
            else {
                cout << "Desea algo mas? (Si, No) \n";
                cin >> respuesta;
            }

            i= i + 1;

            //continua el ciclo
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            //si hay objetos Combo y/o Snack creados:
            //imprime los valores de tipo y costo de los objetos Combo y Snack creados
            else {
                cout << "\n";
                cuent.imprimeCostoT();
                break;
            }
        }

        else {
            //si no se selecciona un valor de 1-3, se cicla
            v=0;
        }
    }

    return 0;
}
