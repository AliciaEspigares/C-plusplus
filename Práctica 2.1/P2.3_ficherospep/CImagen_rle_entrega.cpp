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

// Método tipo para determinar la extensión
// Devuelve un 0 si es pgm, un 1 si es rle, y un -1 si no es ninguno de ellos
int CImagen_rle::Tipo(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo método sobrepasado leer
// Utilizara el método tipo para saber la extensión y por consiguiente
// Llamar o al nuevo método leer para formatos rle, o al método leer de la clase base para pgm
// Finalmente cerrará el fichero
// Si encuentra algún problema durante la ejecución devolverá un -1 al main
int CImagen_rle::Leer(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo método leer para formato rle
// Tras leer la cabecera comprobará que efectivamente se trata de un fichero rle
// Reservará memoria dinámicamente
// E irá leyendo el contenido
// Puesto que la imagen deberá guardarse descomprimida,
// los píxeles deberan descomprimirse según se vayan leyendo
int CImagen_rle::Leer_imagen_rle()
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo método sobrepasado guardar
// Utilizara el método tipo para saber la extensión y por consiguiente
// Llamar o al nuevo método guardar para formatos rle, o al método guardar de la clase base para pgm
// Finalmente cerrará el fichero
// Si encuentra algún problema durante la ejecución devolverá un -1 al main
int CImagen_rle::Guardar(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo método escribir para formato rle
// Escribirá la cabecera así como el valor de los píxeles comprimidos
// Al tener en memoria la imagen descomprimdia, ésta deberá comprimirse según
// vaya escribiendose en el fichero
int CImagen_rle::Escribir_imagen_rle()
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}
