#include <cstdlib>
#include <iostream>
#include "CImagen.h"
#include "CImagen_rle.h"
#include <stdio.h>
#include <locale.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_CTYPE, "Spanish");
    // *************************
    // DESCOMENTAR ESTA LINEA Y COMENTAR LA SIGUIENTE PARA PROBAR EL FUNCIONAMIENTO DE LA CLASE BASE
    //CImagen imagen;
    // VOLVER A DESCOMENTAR ESTA LINEA Y COMENTAR LA ANTERIOR PARA REALIZAR LA PRACTICA CON LA CLASE DERIVADA
    CImagen_rle imagen;
    // *************************
    int correcto;
    char nombre[50];

     while(1)
     {
        fflush(stdin);
        cout << "Introduzca el nombre del fichero a leer (CON EXTENSIÓN):";
        cin >> nombre;
        if (imagen.Leer(nombre)==-1){
                cout << "ERROR: Algo falló durante la lectura de la imagen.\n";
                break;
            }

        fflush(stdin);
        cout << "Introduzca el nombre del fichero a guardar (CON EXTENSIÓN):";
        cin >> nombre;
        if (imagen.Guardar(nombre)==-1){
                cout << "ERROR: Algo falló mientras se guardaba la imagen.\n";
                break;
            }

        correcto=0;
        do{
        fflush(stdin);
        cout << "¿Desea trabajar con otra imagen? SI/NO:";
        cin >> nombre;
        if (strcmp(nombre,"si")==0){
            imagen.LiberarImagen();
            cout << "\t Se ha liberado la memoria de la imagen para poder comenzar a trabajar con una nueva imagen.\n";
            correcto=1;
        }
        else if (strcmp(nombre,"no")==0){
            cout << "\t El programa finalizará ahora.\n";
            correcto=1;
            system("PAUSE");
            return 1;
        }
        else
            cout << "\t ERROR: Introduzca una opción válida.";
        }while(correcto==0);
    }
    system("PAUSE");
    return 1;
}
