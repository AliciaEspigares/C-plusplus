#include "Cimagen.h"

#ifndef  __CIMAGEN_RLE_H__
#define  __CIMAGEN_RLE_H__
class CImagen_rle:public CImagen{
protected:
    int Tipo(char *nombrefichero);  //Método para determinar la extensión del fichero (pgm o rle)
    int Leer_imagen_rle();  // Método para leer una imagen comprimida
    int Escribir_imagen_rle();  // Método para escribir una imagen comprimida
    // Tener en cuenta que las imágenes siempre se almacenarán no comprimidas en memoria
    // es decir, si está comprimida se descomprimirá según se lee para almacenarla en la variable
    // y si hay que guardarla comprimida se comprimirá según se escriba en el fichero

public:
    CImagen_rle();
    ~CImagen_rle(void);

    // Nuevos métodos leer y guardar sobrepasados a la función base Cimagen
    int Leer(char *nombrefichero);
    int Guardar(char *nombrefichero);
};

#ifndef	__CIMAGEN_RLE_CPP__
#else
#endif
#endif

