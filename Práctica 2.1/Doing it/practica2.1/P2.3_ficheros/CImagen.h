#ifndef  __CIMAGEN_H__
#define  __CIMAGEN_H__
class CImagen{
protected:
    unsigned short *imagen; //Elementos de la imagen,
                            // tratamos la información como un vector
    int nfil; //Número de filas de la imagen
    int ncol; //Número de columnas de la imagen
    int maxval; //Valor máximo de cada pixel
    FILE *fich;

    // Estos métodos no son accesibles directamente, sólo por los métodos públicos de la clase
    // Método para abrir el fichero según el modo (1: leer, 0: escribir)
    int Abrir(char *nombrefichero, int modo);
    // Método para leer la cabecera y la imagen
    int Leer_imagen();
    // Método para escribir la cabecera y la imagen
    int Escribir_imagen();
    // Método para cerrar el fichero
    int Cerrar();

public:
    // Constructor y destructor
    CImagen();
    ~CImagen(void);

    // Métodos públicos de la clase para leer un fichero imagen, guardarla o liberar para poder volver a comenzar
    int Leer(char *nombrefichero);
    int Guardar(char *nombrefichero);
    void LiberarImagen();
};

#ifndef	__CIMAGEN_CPP__
#else
#endif
#endif
