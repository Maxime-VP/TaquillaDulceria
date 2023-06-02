#include <iostream>
#include "Palomitas.h"
#include "Bebida.h"
#include "Combo.h"
#include "Snack.h"
#include "ComboNachos.h"
#include "ComboHotdog.h"


using namespace std;

void menu(){

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

    cout << "Bienvenido al Cine, que desea ordenar? \n";

    Combo *comboPtr[15]; // nnnnn
    Snack *botana[15]; // se crea arreglo de apuntadores
    int i = 0, v=0, c=0; //se crea una variable para ciclo
                     //v es la variable que uso para validar
                     //c es la variable para ciclo combo

    double total, _costo, mensajeP;
    string orden, _tamano, mensaje, respuesta;
    string tipo;

    while (v == 0) {  //corre el código hasta que se utilice uno de los 3 valores aceptados
        menu();

        cin >> orden;

        if (orden == "1") { //valida la eleccion del usuario


            // Este segmento recibe la eleccion de tamaño

            cout << "Escriba (Nacho) para Combo nachos o (Hotdog) para Combo hotdog \n";
            cin >> tipo;

            //Este segmento asigna el costo del producto dependiendo del Combo elegido
            if (tipo=="Nacho"){
                comboPtr[c]= new ComboNachos();

            }
            if (tipo=="Hotdog"){
                comboPtr[c]= new ComboHotdog();

            }

            comboPtr[c] ->setCosto();
            cout << "Combo Nachos " <<  comboPtr[c] ->getCosto() << " " << "$" << endl;
            total = total + comboPtr[c] ->getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No) \n";

            //nnnnn if i=14 breackear ciclo

            cin >> respuesta;

            c= c + 1;

            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "\n";
                if (c !=0){
                    for (int b=0; b<c; b++){
                        mensaje = comboPtr[b]->Imprime();
                        mensajeP = comboPtr[b]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }
                if (i!=0){
                    for (int a=0; a<i; a++){
                        mensaje = botana[a]->Imprime();
                        mensajeP = botana[a]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }


                cout << "\nEl total es " << total<<"$";

                break;
            }

        }

        if (orden == "2") { //valida la eleccion del usuario

            // Este segmento recibe la eleccion de tamaño


            _tamano = tamanoOrden();

            //Este segmento asigna el costo del producto dependiendo del tamaño


            //Palomitas P1 = Palomitas(_tamano); esta es la forma original que tenía de agregar palomitas
            //P1.setCosto(_tamano);
            //botana[i] nos permite crear multiples instancias de palomitas o referescos y acceder a ellas después
            botana[i]= new Palomitas(_tamano);
            botana[i] ->setCosto(_tamano);


            cout << "Palomitas tamano " << botana[i] ->getTamano() << " " << botana[i] ->getCosto() << "$" << endl;
            total = total + botana[i] ->getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No) \n";

            //nnnnn if i=14 breackear ciclo

            cin >> respuesta;

            i= i + 1;

            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "\n";

                if (c !=0){
                    for (int b=0; b<c; b++){
                        mensaje = comboPtr[b]->Imprime();
                        mensajeP = comboPtr[b]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }
                if (i!=0){
                    for (int a=0; a<i; a++){
                        mensaje = botana[a]->Imprime();
                        mensajeP = botana[a]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }


                cout << "\nEl total es " << total<<"$";

                break;
            }
        }

        if (orden == "3") { //valida la eleccion del usuario

            //Este segmento recibe la eleccion de tamaño


            _tamano = tamanoOrden();

            //Este segmento asigna el costo del producto dependiendo del tamaño

            //Bebida B1 = Bebida(_tamano); esta era la creación original de bebida
            //B1.setCosto(_tamano);
            botana[i]= new Bebida(_tamano); //se guarda bebida en una lista de apuntadores
            botana[i] ->setCosto(_tamano);


            cout << "Bebida tamano " << botana[i] ->getTamano() << " " << botana[i] ->getCosto() << "$" << endl;
            total = total + botana[i] ->getCosto(); //suma el costo del producto al total

            cout << "Desea algo mas? (Si, No) \n";
            cin >> respuesta;

            i= i + 1;

            if (respuesta == "Si" or respuesta == "S" or respuesta == "s" or respuesta == "si" or respuesta =="SI"){
                v=0;
            }
            else {
                cout << "\n";
                if (c !=0){
                    for (int b=0; b<c; b++){
                        mensaje = comboPtr[b]->Imprime();
                        mensajeP = comboPtr[b]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }
                if (i!=0){
                    for (int a=0; a<i; a++){
                        mensaje = botana[a]->Imprime();
                        mensajeP = botana[a]->getCosto();
                        cout << mensaje << "  " << mensajeP << "\n";
                    }
                }


                cout << "\nEl total es " << total<<"$";

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

