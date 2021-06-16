#define __CLASE_CPP__
#include <iostream>
#include <math.h>
#include "clase.h"
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#define pi (3.141592653589793)
using namespace std;

clase::clase(){ //constructor
    
    tipo=0;
    valores=NULL;
    figura_seleccionada=0;      

}

clase::~clase(void)  //destructor
{
    if(valores!=NULL){
        delete[] valores; //Libera la memoria reservada a valores
    }
}

void clase::introducir_datos(int tipo_Dato){ //Recibe tipo, pregunta por los datos y reserva dinamicamente la memoria
//Tipos de datos:  1:circulo, 2:triangulo, 3:rectangulo
    if (figura_seleccionada==1){
        printf("Ya hay una figura cargada. Por favor, libera la memoria para poder continuar\n");
    }
    else{
        tipo=tipo_Dato;
        figura_seleccionada=1;
        switch (tipo){
            case 1:
                valores=(float*)malloc(1*sizeof(float));
                printf("Por favor, introduzca el radio del circulo\n");
                scanf("%f",&valores[0]);
                break;
            case 2:
                valores=(float*)malloc(2*sizeof(float));
                printf("Por favor, introduzca la longitud de la base del triangulo\n");
                scanf("%f",&valores[0]);
                printf("A continuacion introduzca la altura del triangulo\n");
                scanf("%f",&valores[1]);
                break;
            case 3:
                valores=(float*)malloc(2*sizeof(float));
                printf("Por favor, introduzca la longitud de la base del rectangulo\n");
                scanf("%f",&valores[0]);
                printf("A continuacion introduzca la altura del rectangulo\n");
                scanf("%f",&valores[1]);
                break;
            default:
                printf("No ha seleccionado la figura correcta, por favor, vuelva a intentarlo.\n");
                figura_seleccionada=0;
                break;
        }
        
    }

}

//Calcula el area en función de la figura que sea
float clase::calcular_area(){
//Tipos de figuras: 1:circulo, 2:triangulo, 3:rectangulo
    switch (tipo){
        case 1:
            return (pi*pow(valores[0],2));
            break;
        case 2:
            return (valores[0]*valores[1]/2);
            break;
        case 3:
            return (valores[0]*valores[1]);
            break;
        default:
            printf("\nERROR AL CALCULAR EL AREA. Por favor, seleccione una forma primero.\n");
            return -1;
            break;
    }


}

//Calcula el perimetro en función de la figura que sea
float clase::calcular_perimetro(){
    switch (tipo) {
        case 1:
            return (2*valores[0]*pi);
            break;
        case 2:
            printf("No se puede calcular el perimetro del triangulo al desconocer el tipo de triangulo.\n");
            return(-1);
            break;
        case 3:
            return (valores[0]*2+valores[1]*2);
            break;
        default:
            printf("\nERROR AL CALCULAR EL PERIMETRO. Por favor, seleccione una forma primero.\n");
            return -1;
            break;
    }



}

//Inicializa las variables y libera la memoria reservada en caso de ser necesario
void clase::liberar(){
    tipo=0;
    figura_seleccionada=0;  
    if(valores!=NULL)
        delete[] valores; //Libera la memoria reservada a valores
}