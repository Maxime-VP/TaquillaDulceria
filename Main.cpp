#include <iostream>
#include "Palomitas.h"
#include "Bebida.h"
#include "Combo.h"


using namespace std;

void menu(){
    cout << "Bienvenido al Cine, que desea ordenar? \n";
    cout << "(1) Combo \n"; //Por programar
    cout << "(2) Palomitas \n"; //Programado
    cout << "(3) Refresco \n" << endl; //Por programar
}

string tamanoOrden() { //da valor al tamaño de palomitas
    string _tamano;
    cout << "De que tamano? (Grande, Mediano, Chico)" << endl;
    cin >> _tamano;
    return _tamano;
}


int main() {

    int v; //v es la variable que uso para validar
    v = 0;
    double total;
    string orden;
    string _tamano;
    double _costo;
    string respuesta;

    while (v == 0) {
        menu();

        cin >> orden;

        if (orden == "1") { //valida la eleccion del usuario

            // nnnn Este segmento recibe la eleccion de tipo de combo


            //Este segmento asigna el costo del producto dependiendo del tamaño

            Combo C1 = Combo();

            cout << "Combo " << C1.getCosto() << "$" << endl;
            total = total + C1.getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No)";
            cin >> respuesta;
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "El total acumulado es " << total<<"$";
                break;
            }

        }

        if (orden == "2") { //valida la eleccion del usuario

            // Este segmento recibe la eleccion de tamaño


            _tamano = tamanoOrden();

            //Este segmento asigna el costo del producto dependiendo del tamaño

            Palomitas P1 = Palomitas(_tamano);
            P1.setCosto(_tamano);

            cout << "Palomitas tamano " << P1.getTamano() << " " << P1.getCosto() << "$" << endl;
            total = total + P1.getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No)";
            cin >> respuesta;
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "El total acumulado es " << total<<"$";
                break;
            }
        }

        if (orden == "3") { //valida la eleccion del usuario

            //Este segmento recibe la eleccion de tamaño


            _tamano = tamanoOrden();

            //Este segmento asigna el costo del producto dependiendo del tamaño

            Bebida B1 = Bebida(_tamano);
            B1.setCosto(_tamano);

            cout << "Bebida tamano " << B1.getTamano() << " " << B1.getCosto() << "$" << endl;
            total = total + B1.getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No)";
            cin >> respuesta;
            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "El total acumulado es " << total<<"$";
                break;
            }
        }

        else {
            //cout<< "Valor invalido, seleccione de nuevo";
            v=0;
        }
    }
    return 0;
}
