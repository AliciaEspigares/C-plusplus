Este ejercicio está obtenido de una prueba de examen de junio 2016 de Sistemas Informáticos Industriales de la Universidad Miguel Hernández.
El enunciado se puede obtener en la página: https://umh1774.edu.umh.es/ 

Exercice.clase.cpp, exercice.examen.cpp y clase.h son los ficheros facilitados por el profesor. 
Examen.cpp y clase.cpp son la solución al problema (requieren de clase.h).



ENUNCIADO (http://umh1774.edu.umh.es/wp-content/uploads/sites/4/2017/07/2016_06_examen_sii_practico_solucion.pdf)

Escribir un programa en C++ y C ,que mediante el uso de clases y métodos, pida al usuario seleccionar una figura geométrica (círculo, triángulo o cuadrado), a continuación solicite sus medidas y finalmente permita calcular su área y perímetro.
    a. Se facilita el fichero clase.h (que no debe modificarse) con la definición de la clase y los métodos a implementar.
    b. Se facilita un main en el fichero examen.cpp que deberéis completar para que cumpla su función:
        i. Deberéis añadir las líneas necesarias para que el menú se ejecute de forma contínua tras seleccionar cada opción hasta que se marque la opción 0.
        ii. Deberéis añadir las llamadas a los métodos en cada apartado.
    c. Se facilita la estructura del fichero clase.cpp para que lo completéis con el constructor por defecto y destructor, así como los métodos a implementar:
        i. Constructor por defecto:
            1. Deberán inicializarse las variables de la clase.
        ii. Destructor:
            1. Deberá liberarse la memoría en caso de ser necesario.
        iii. Método introducir_datos:
            1. Este método recibe la figura geométrica seleccionada pero sólo podrá ejecutarse si no hay una previamente cargada.
            2. Deberá reservar dinámicamente la memoría para almacenar la información necesaria para cada figura geométrica: radio para el círulo, base y altura para el triángulo y para el cuadrado.
            3. Finalmente deberán pedirse dichos valores al usuario para almacenarlos en el vector.
        iv. Método calcular_area
            1. Deberá devolver el área de la forma seleccionada.
        v. Método calcular_perimetro
            1. Deberá devolver el perímetro de la forma seleccionada. En el caso del triángulo, al no tener toda la informacion sobre el tipo de triángulo deberá indicarse por pantalla que no puede calcularse y devolver -1 para que en el menú no se muestre dicho valor.
        vi. Método liberar
            1. Deberá inicializar las variables para poder seleccionar una nueva forma y liberar la memoria reservada en caso de ser necesario