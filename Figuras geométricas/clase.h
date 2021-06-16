#ifndef __CLASE_H__
#define __CLASE_H__

class clase{
    protected:
        int tipo;
        float *valores;
        int figura_seleccionada;
    public:
        clase();//Constructor
        ~clase(void); //Destructor
        void introducir_datos(int t);
                    // Recibe tipo de forma,
                    // reserva dinamicamente la memoria
                    // y solicita los datos

        float calcular_area(); // Metodo que calcula el área
                               // de la forma seleccionada
        float calcular_perimetro(); // Metodo que calcula el
                                    // perimetro de la forma seleccionada

        void liberar();

};
#ifndef __CLASE_CPP__
#else
#endif
#endif