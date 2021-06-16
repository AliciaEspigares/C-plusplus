#define __EXAMEN_CPP__
#include <iostream>
#include "clase.h"
#include <cstdlib>
#include <stdio.h>
#include <string.h>
#include <locale.h>
using namespace std;

int main(void){
    int opcion_menu,tipo_de_forma;
    float perimetro,area;
    clase miclase;

printf("\n- MENU -\n--------\n");
printf("1: Seleccionar forma\n");
printf("2: Calcular area\n");
printf("3: Calcular perimetro\n");
printf("4: Liberar\n");
printf("0: SALIR\n");
printf("Introduzca opcion del menu: ");
scanf("%d",&opcion_menu);
switch(opcion_menu){
    case 1:
        printf("Introduzca tipo de forma a crear\n");
        printf(" (1:circulo, 2:triangulo, 3:rectangulo): ");
        scanf("%d",&tipo_de_forma);
        break;
    case 2:
        printf("Area de la forma seleccionada: %.2f\n",area);
        break;
    case 3:
        if (perimetro==-1)
            break;
        printf("Perimetro de la forma seleccionada: %.2f\n",perimetro);
        break;
    case 4:
        printf("La memoria ha sido liberada y ya puede crear una nueva forma.\n");
        break;
    default:
        break;
    }
}