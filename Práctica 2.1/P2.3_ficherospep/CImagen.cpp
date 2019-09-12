#include <iostream>
#include "CImagen.h"
#include <stdio.h>
#include <string.h>

using namespace std;

//CONSTRUCTOR
CImagen::CImagen()
{
    // Solo inicializa a 0 todas las variables y la imagen a NULL
    // Una vez abierto el fichero podr� saberse el n�mero de filas y columnas
    // y realizar la reserva din�mica de memoria correspondiente
    imagen=NULL;
    nfil=0;
    ncol=0;
    maxval=0;
}

//DESTRUCTOR.
CImagen::~CImagen(void)
{
    if (imagen!=NULL)
        delete []imagen;
}

// M�todo principal para leer imagen
// Llamar� en orden a cada uno de los m�todos necesarios para leer la imagen pgm
// Abrir, leer contenido y cerrar el fichero
// Si encuentra alg�n problema devolver� un -1, sino 0
int CImagen::Leer(char *nombrefichero)
{
    int e;

    e=Abrir(nombrefichero,1);
    if (e==-1) return e;

    e=Leer_imagen();
    if (e==-1) return e;

    e=Cerrar();
    if (e==-1) return e;

    return 0;
}

// Este m�todo abre el fichero en nodo lectura o escritura seg�n el modo
int CImagen::Abrir(char *nombrefichero,int modo)
 {
    if (modo==1)
        fich = fopen(nombrefichero,"r");
    else
        fich = fopen(nombrefichero,"w");
    if(fich == NULL){
        cout<< "\t ERROR: No ha sido posible abrir el fichero indicado. " <<endl;
        return -1;
    }
    return 0;
}

// Este m�todo lee la cabecera de la imagen
// Comprueba, seg�n la cabecera, que sea una imagen pgm
// Reserva memoria y lee la imagen para almacenarla en la variable imagen
int CImagen::Leer_imagen()
{
    int i=0;
    unsigned int dat;
    char linea[50];

    fgets(linea, 49, fich);//Leemos el encabezado del fichero y comprobamos que la informaci�n leida es correcta
    linea[strlen(linea)-1]='\0';
    if(strcmp(linea,"P2")!=0)
    {
        cout<< "\t ERROR: La informaci�n contenida en la cabecera ("<< linea<< ") no se corresponde con una imagen formato pgm. " <<endl;
        Cerrar();
        return -1;
    }
    fscanf(fich, "%d", &ncol);
    fscanf(fich, "%d", &nfil);
    fscanf(fich, "%d", &maxval);
    cout << "\n\t Numero de filas de la imagen: " << nfil;
    cout << "\n\t Numero de columnas de la imagen: " << ncol;
    cout << "\n\t Valor m�ximo de cada pixel: " << maxval << endl;

    // Reserva dinamica de memoria ahora que se conocen las dimensiones
    imagen= new unsigned short[nfil*ncol];

    while(!feof(fich) && i<nfil*ncol){
        fscanf(fich, "%u", &dat);
        imagen[i] = dat;//Guardamos los valores en un array.
        i++;
    }
    cout << "\n\t Imagen PGM leida con �xito" << endl;
    return 0;
}

// M�todo para cerrar el fichero
int CImagen::Cerrar()
{
    return(fclose(fich));
}

// M�todo principal para guardar imagen
// Llamar� en orden a cada uno de los m�todos necesarios para guardar la imagen pgm
// Abrir, escribir contenido y cerrar el fichero
// Si encuentra alg�n problema devolver� un -1, sino 0
int CImagen::Guardar(char *nombrefichero)
{
    int e;

    e=Abrir(nombrefichero,0);
    if (e==-1) return e;

    e=Escribir_imagen();
    if (e==-1) return e;

    e=Cerrar();
    if (e==-1) return e;

    return 0;
}

// M�todo para escribir la cabecera y los valores de los p�xeles de la imagen
int CImagen::Escribir_imagen()
{
    fprintf(fich, "P2\n");
    fprintf(fich, "%d %d\n%d\n", ncol,nfil, maxval);

    for(int i=0; i<nfil*ncol; i++)//Escribimos los valores de la imagen caragada en memoria.
        fprintf(fich, "%d ", imagen[i]);
    return 0;
}

// M�todo para liberar imagen
// Se utiliza para liberar todas las variables en caso de querer
// trabajar con otra imagen antes de salir del programa
void CImagen::LiberarImagen(void)
{
    delete []imagen;
    imagen=NULL;
    nfil=0;
    ncol=0;
    maxval=0;
}
