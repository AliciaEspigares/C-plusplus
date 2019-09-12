#include "Cimagen.h"

#ifndef  __CIMAGEN_RLE_H__
#define  __CIMAGEN_RLE_H__
class CImagen_rle:public CImagen{
protected:
    int Tipo(char *nombrefichero);  //M�todo para determinar la extensi�n del fichero (pgm o rle)
    int Leer_imagen_rle();  // M�todo para leer una imagen comprimida
    int Escribir_imagen_rle();  // M�todo para escribir una imagen comprimida
    // Tener en cuenta que las im�genes siempre se almacenar�n no comprimidas en memoria
    // es decir, si est� comprimida se descomprimir� seg�n se lee para almacenarla en la variable
    // y si hay que guardarla comprimida se comprimir� seg�n se escriba en el fichero

public:
    CImagen_rle();
    ~CImagen_rle(void);

    // Nuevos m�todos leer y guardar sobrepasados a la funci�n base Cimagen
    int Leer(char *nombrefichero);
    int Guardar(char *nombrefichero);
};

#ifndef	__CIMAGEN_RLE_CPP__
#else
#endif
#endif

