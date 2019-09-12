// --------------------------------------
// NOMBRE Y DNI DEL ALUMNO
// --------------------------------------
#include <iostream>
#include "CImagen_rle.h"
#include <stdio.h>
#include <string.h>

using namespace std;

//CONSTRUCTOR
CImagen_rle::CImagen_rle()
{
}

//DESTRUCTOR.
CImagen_rle::~CImagen_rle(void)
{
}

int CImagen_rle::Tipo(char *nombrefichero)
{

        if(strcmp(nombrefichero+strlen(nombrefichero)-4,".pgm")==0) return 0; //lee los últimos 4 dígitos del fichero para comparar las extensiones
        else if(strcmp(nombrefichero+strlen(nombrefichero)-4,".rle")==0) return 1;
        else return -1;

}


int CImagen_rle::Leer(char *nombrefichero)
{
    int e;
    int a;
    /******* Abrimos fichero *******/
        e=Abrir(nombrefichero,1);
        if (e==-1) return e;
    /******* Miramos el tipo de fichero *******/
        a=Tipo(nombrefichero);
        if (a==0){
            e=Leer_imagen();
            if (e==-1) return e;}
        if (a==1){
            e=Leer_imagen_rle();
            if (e==-1) return e;}
        if(a!=0 && a!=1){
            cout<< "\t ERROR: La información contenida en la cabecera no se corresponde con una imagen formato rle o pgm. " <<endl;
            Cerrar();
            return -1;
        }
   /******* Cerramos fichero *******/
         e=Cerrar();
        if (e==-1) return e;

        return 0;
}


int CImagen_rle::Leer_imagen_rle()
{
     int i=0;
    unsigned int dat;
    char linea[50];
    unsigned int pixel;
    unsigned int num;
    int p=0;

    fgets(linea, 49, fich);//Leemos el encabezado del fichero y comprobamos que la información leida es correcta
    linea[strlen(linea)-1]='\0';
    if(strcmp(linea,"P2RLE")!=0)
    {
        cout<< "\t ERROR: La información contenida en la cabecera ("<< linea<< ") no se corresponde con una imagen formato rle. " <<endl;
        Cerrar();
        return -1;
    }
    fscanf(fich, "%d", &ncol);
    fscanf(fich, "%d", &nfil);
    fscanf(fich, "%d", &maxval);
    cout << "\n\t Numero de filas de la imagen: " << nfil;
    cout << "\n\t Numero de columnas de la imagen: " << ncol;
    cout << "\n\t Valor máximo de cada pixel: " << maxval << endl;

    // Reserva dinamica de memoria ahora que se conocen las dimensiones
    imagen= new unsigned short[nfil*ncol];

    while(!feof(fich)){ //Guardamos la imagen descomprimida
    fscanf(fich, "%u", &pixel);
    fscanf(fich,  "%u", &num);

        for(i=0; i<num; i++){
            if(feof(fich)) break;
            imagen[p]=pixel;
            p++;

        }
    }

    cout << "\n\t Imagen RLE leida con éxito" << endl;
    return 0;
}


int CImagen_rle::Guardar(char *nombrefichero)
{
    int e;
    int a;
    /******* Abrimos fichero *******/
        e=Abrir(nombrefichero,0);
        if (e==-1) return e;
    /******* Miramos el tipo de fichero *******/
        a=Tipo(nombrefichero);
        if (a==0){
            e=Guardar(nombrefichero);
            if (e==-1) return e;}
        if (a==1){
            e=Escribir_imagen_rle();
            if (e==-1) return e;}
        if(a!=0 && a!=1){
            cout<< "\t ERROR: La información contenida en la cabecera no se corresponde con una imagen formato rle o pgm. " <<endl;
            Cerrar();
            return -1;
        }
    /******* Cerramos fichero *******/
        e=Cerrar();
        if (e==-1) return e;

        return 0;
}


int CImagen_rle::Escribir_imagen_rle()
{
    int a=0;
    int p=1;
    fprintf(fich, "P2RLE\n");
    fprintf(fich, "%d %d\n%d\n", ncol,nfil, maxval);

    for(int i=0; i<=nfil*ncol;i++){ //Guardamos la imagen comprimida
        p=1;
        for(int j=i+1; j<=nfil*ncol;j++){
            if(imagen[i]==imagen[j]){
                p++;}

            else {
                fprintf(fich, "%d ", imagen[i]);
                fprintf(fich, "%d ", p);
                i=j-1;
                break;

            }
        }


    }

    return 0;
}
