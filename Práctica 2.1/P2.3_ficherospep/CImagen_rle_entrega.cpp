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

// M�todo tipo para determinar la extensi�n
// Devuelve un 0 si es pgm, un 1 si es rle, y un -1 si no es ninguno de ellos
int CImagen_rle::Tipo(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo m�todo sobrepasado leer
// Utilizara el m�todo tipo para saber la extensi�n y por consiguiente
// Llamar o al nuevo m�todo leer para formatos rle, o al m�todo leer de la clase base para pgm
// Finalmente cerrar� el fichero
// Si encuentra alg�n problema durante la ejecuci�n devolver� un -1 al main
int CImagen_rle::Leer(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo m�todo leer para formato rle
// Tras leer la cabecera comprobar� que efectivamente se trata de un fichero rle
// Reservar� memoria din�micamente
// E ir� leyendo el contenido
// Puesto que la imagen deber� guardarse descomprimida,
// los p�xeles deberan descomprimirse seg�n se vayan leyendo
int CImagen_rle::Leer_imagen_rle()
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo m�todo sobrepasado guardar
// Utilizara el m�todo tipo para saber la extensi�n y por consiguiente
// Llamar o al nuevo m�todo guardar para formatos rle, o al m�todo guardar de la clase base para pgm
// Finalmente cerrar� el fichero
// Si encuentra alg�n problema durante la ejecuci�n devolver� un -1 al main
int CImagen_rle::Guardar(char *nombrefichero)
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}

// Nuevo m�todo escribir para formato rle
// Escribir� la cabecera as� como el valor de los p�xeles comprimidos
// Al tener en memoria la imagen descomprimdia, �sta deber� comprimirse seg�n
// vaya escribiendose en el fichero
int CImagen_rle::Escribir_imagen_rle()
{
    // CODIGO A COMPLETAR POR EL ALUMNO
    // ***********************************

    // ***********************************
}
