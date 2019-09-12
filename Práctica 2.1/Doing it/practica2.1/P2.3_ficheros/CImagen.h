#ifndef  __CIMAGEN_H__
#define  __CIMAGEN_H__
class CImagen{
protected:
    unsigned short *imagen; //Elementos de la imagen,
                            // tratamos la informaci�n como un vector
    int nfil; //N�mero de filas de la imagen
    int ncol; //N�mero de columnas de la imagen
    int maxval; //Valor m�ximo de cada pixel
    FILE *fich;

    // Estos m�todos no son accesibles directamente, s�lo por los m�todos p�blicos de la clase
    // M�todo para abrir el fichero seg�n el modo (1: leer, 0: escribir)
    int Abrir(char *nombrefichero, int modo);
    // M�todo para leer la cabecera y la imagen
    int Leer_imagen();
    // M�todo para escribir la cabecera y la imagen
    int Escribir_imagen();
    // M�todo para cerrar el fichero
    int Cerrar();

public:
    // Constructor y destructor
    CImagen();
    ~CImagen(void);

    // M�todos p�blicos de la clase para leer un fichero imagen, guardarla o liberar para poder volver a comenzar
    int Leer(char *nombrefichero);
    int Guardar(char *nombrefichero);
    void LiberarImagen();
};

#ifndef	__CIMAGEN_CPP__
#else
#endif
#endif
