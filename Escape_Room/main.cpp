#include <iostream>
#include "windows.h"
#include <string>
#include "string.h"
using namespace std;
//system("PAUSE()");

void choose();
void chooseadmin();
int menuadmin();
int real(){
cout<<" "<<endl;
Sleep(100);
cout<<" " <<endl;
Sleep(100);
cout<<" " <<endl;
Sleep(100);
cout<< " "<<endl;
Sleep(100);
}
int contrasena_ini(){
    std::string temp;
    cout << "Introduce la contrasena. Tiene 3 intentos. Si falla se ejecutaran las preguntas de seguridad." << endl;
    cin >> temp;
    cout << "Contrasena incorrecta. Intentelo de nuevo. Le quedan 2 intentos." << endl;
    cin >> temp;
    cout << "Contrasena incorrecta. Intentelo de nuevo. Le queda 1 intento." << endl;
    cin >> temp;
    cout << "Contrasena incorrecta." << endl;
    Sleep(1000);
    cout << "Intentos restantes: " << flush;
    Sleep(1000);
    cout << "0" << endl;
    Sleep(1000);
    cout << "Iniciando proceso de reconocimiento..." << endl;
    Sleep(2000);
    cout << "Usuario Antonio Gonzalez" << endl;
    Sleep(1000);
    cout << "Estableciendo contacto con la base de datos..." << endl;
    Sleep(2000);
    cout << "Buscando preguntas de seguridad..." << endl;
    Sleep(1500);
    cout << "..." << endl;
    Sleep(1500);
    cout << "..." << endl;
    Sleep(1700);
    cout << "..." << endl;
    Sleep(1000);
    cout << "Preguntas de seguridad encontradas" << endl;
    Sleep(1500);
    cout << "Inicio de proceso de reconocimiento en 3" << endl;
    Sleep(1000);
    cout << "Inicio de proceso de reconocimiento en 2" << endl;
    Sleep(1000);
    cout << "Inicio de proceso de reconocimiento en 1" << endl;
    Sleep(1000);
    cout << "Proceso de reconocimiento iniciado.\n" << endl;
    Sleep(1000);
}
int preguntas_reconocimiento(){
    std::string c_in;
    std::string madre= "lola";
    std::string perro ="dog";
    std::string ciudad ="pechora";
    Sleep(1000);
    cout << "Por favor, introduzca el nombre de su madre." << endl;
    while(1){
        cin >> c_in;
        if(c_in.compare(madre)==0){
            break;
        }
         cout<<"Respuesta incorrecta. Intentelo de nuevo."<<endl;

    }
cout<<"Respuesta correcta\n"<<endl;
Sleep(1000);
cout << "Por favor, introduzca el nombre de su perro." << endl;
    while(1){
        cin >> c_in;
        if(c_in.compare(perro)==0){
            break;
        }
        cout<<"Respuesta incorrecta. Intentelo de nuevo."<<endl;

    }
cout<<"Respuesta correcta\n"<<endl;
Sleep(1000);
cout << "Por favor, introduzca el nombre de su ciudad de nacimiento." << endl;
    while(1){
        cin >> c_in;
        if(c_in.compare(ciudad)==0){
            break;
        }
         cout<<"Respuesta incorrecta. Intentelo de nuevo."<<endl;

    }
cout<<"Respuesta correcta\n\n"<<endl;
    Sleep(1000);
cout<<"Bienvenido Antonio."<<endl;
real();

}
int menuprincipal(){
    int num;
    Sleep(700);
cout<<"\n**MENU PRINCIPAL**\n"<<endl;
cout<<"1.Mis archivos"<<endl;
cout<<"2.Web"<<endl;
cout<<"3.Antivirus"<<endl;
cout<<"4.Ubicacion secreta"<<endl;
cout<<"5.Modo administrador"<<endl;
choose();
}
int misarchivos(){
    Sleep(700);
cout<<"\n**MIS ARCHIVOS**\n"<<endl;
cout<<"1.Documentos"<<endl;
cout<<"2.Fotos"<<endl;
cout<<"3.Videos"<<endl;
cout<<"4.Musica"<<endl;
cout<<"5.Descargas"<<endl;
cout<<"6.Volver al menu principal"<<endl;
cout<<"\nIntroduce el numero del menu elegido (¡Cuidado! No introducir ninguna letra): "<<flush;
int num;
cin >> num;
switch (num){
case 1:
    Sleep(1000);
    cout<<"Carpeta vacia.\n\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
case 2:
    Sleep(1000);
    cout<<"Carpeta vacia.\n\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
case 3:
    Sleep(1000);
    cout<<"Carpeta vacia.\n\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
case 4:
    Sleep(1000);
    cout<<"Carpeta vacia.\n\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
case 5:
    Sleep(1000);
    cout<<"Carpeta vacia.\n\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
case 6:
    real();
    menuprincipal();
    break;
default:
    Sleep(1000);
    cout<<"El numero introducido no es correcto.\n"<<endl;
    system("pause");
    real();
    misarchivos();
    break;
}
}
int ubicacion(){
    int num;
    int billar = 3611;
cout<<"Se ha iniciado el programa \"Ubicacion secreta\"."<<endl;
Sleep(1500);
cout<<"Este programa le ayudara a encontrar la llave que abrira la caja del antidoto."<<endl;
Sleep(2000);
cout<<"Si desea continuar escriba 1. En caso de querer volver al menu principal, escriba 0."<<endl;
cin >> num;
if (num == 0){
    real();
    menuprincipal();
}
Sleep(1000);
cout<<"Iniciando programa Ubicacion Secreta..."<<endl;
Sleep(1000);
cout<<"Estableciendo parametros de entrada..."<<endl;
Sleep(1000);
cout<<"Calculando posiciones..."<<endl;
Sleep(1000);
cout<<"Descifrando mapas..."<<endl;
Sleep(1000);
cout<<"Estableciendo comunicacion con base de datos..."<<endl;
Sleep(2000);
cout<<"Programa inicializado correctamente"<<endl;
Sleep(1000);
cout<<"El programa comenzara en 3"<<flush;
Sleep(1000);
cout<<" 2"<<flush;
Sleep(1000);
cout<<" 1"<<endl;
Sleep(1000);
cout<<"Ubicacion Secreta iniciada\n\n"<<endl;
Sleep(1000);
cout<<"Pista para encontrar la siguiente ubicacion: Feliz Cumpleaños"<<endl;
system("pause");
cout<<"Introduce el numero para continuar. \nPISTA: Introduce el numero sin espacios y en orden ascendente."<<endl;
while(1){
    cin >> num;
    if(num==billar){
        cout<<"Numero correcto.\n"<<endl;
        break;
    }
    cout<<"Numero incorrecto. Intentelo de nuevo."<<endl;
}
Sleep(1000);
cout<<"Pista para la siguiente localizacion:"<<endl;
Sleep(1000);
cout<<"Como pincha cuando estás en alto. Mejor no pises lo que te da de comer."<<endl;
system("pause");
cout<<"\nYa lo ha encontrado?"<<endl;
Sleep(1000);
cout<<"Vaya, me parece que sin su pareja no sirve de nada."<<endl;
Sleep(2000);
cout<<"Encontrara lo que necesita si sigue el csmino del mapa del tesoro.\n"<<endl;
Sleep(5000);
system("pause");
cout<<"\nFin del programa Ubicacion Secreta.\n"<<endl;
system("pause");
real();
menuprincipal();
}
int admin(){
    std::string temp;
    std::string contra = "admin";
    int num;
    Sleep(1000);
cout<<"Introduzca la contrasena de administrador del sistema. Escriba 'salir' para salir al menu principal"<<endl;
while(1){
cin >> temp;
if (contra.compare(temp)==0){
        Sleep(1000);
        cout<<"Respuesta correcta."<<endl;
break;
}
else if (temp.compare("salir")==0){
    real();
    menuprincipal();
}
Sleep(1000);
 cout<<"Respuesta incorrecta. Intentelo de nuevo."<<endl;
}
menuadmin();
}
int menuadmin(){
    int num;
    Sleep(700);
cout<<"\n**MENU PRINCIPAL MODO ADMINISTRADOR**\n"<<endl;
cout<<"1.Mis archivos"<<endl;
cout<<"2.Web"<<endl;
cout<<"3.Antivirus"<<endl;
cout<<"4.Bunker"<<endl;
cout<<"5.Ajustes"<<endl;

chooseadmin();
}
int bunker(){
std::string temp;
std::string contra = "145.36";
int num;
cout<<"Introduzca la contrasena para entrar al bunker. Escriba 'menu' para volver al menu administrador"<<endl;
while(1){
cin >> temp;
if (contra.compare(temp)==0){
        cout<<"Respuesta correcta."<<endl;

break;
}
else if (temp.compare("menu")==0){
    real();
    menuadmin();
}
 cout<<"Respuesta incorrecta. Intentelo de nuevo."<<endl;
}
cout<<"\nLa ubicacion de la llave de entrada al bunker es: BAJO EL TRONO\n"<<endl;
Sleep(1000);
cout<<"Pero necesitara esto una vez este dentro:\n"<<endl;
Sleep(1000);
cout<<"2011-Spring Agora Alicante\nMayo 2013-10th Aniversary \"AniEverSario\""<<endl;
cout<<"Abril 2014 - Spring NWM Alicante\nFebrero 2016 - Mini-T4T Alicante"<<endl;
cout<<"Julio 2017 - Alicante's land: beach, fire and SUn\nNOviembre 2017- Network Magic World\nJunio 2018 - Alicante On Fire 2.0\n\n"<<endl;
Sleep(1000);
cout<<"Buena suerte"<<endl;
return 0;

}
int ajustes(){
Sleep(700);
real();
cout<<"\n**MENU AJUSTES**\n"<<endl;
cout<<"1.Cambiar nombre de usuario"<<endl;
cout<<"2.Cambiar contrasena"<<endl;
cout<<"3.Formatear ordenador"<<endl;
cout<<"4.Volver a menu administrador"<<endl;
cout<<"\nIntroduce el numero del menu elegido (¡Cuidado! No introducir ninguna letra): "<<flush;
int num;
std::string nombre, contra;
cin >> num;
switch (num){
case 1:
    cout<<"Introduzca su nuevo nombre de usuario"<<endl;
    cin >> nombre;
    real();
    cout<<"Bienvenido "<< nombre << "\n"<< endl;
    menuadmin();
    break;
case 2:
    cout<<"Introduzca su nueva contrasena"<<endl;
    cin >> contra;
    Sleep(1000);
    cout<<"Contrasena cambiada."<< endl;
    real();
    menuadmin();
    break;
case 3:
    Sleep(1000);
    cout<<"De verdad?"<<endl;
    Sleep(1000);
    cout<<"O sea..."<<endl;
    Sleep(1000);
    cout<<"en serio?"<<endl;
    Sleep(1000);
    cout<<"Tu lo has querido..."<<endl;
    Sleep(1000);
    return 0;
    break;
case 4:
    real();
    menuadmin();
    break;
default:
    cout<<"El numero introducido no es correcto."<<endl;
    system("pause");
    real();
    menuadmin();
    break;
}
}
void choose(){
cout<<"\nIntroduce el numero del menu elegido (¡Cuidado! No introducir ninguna letra): "<<flush;
int num;
cin >> num;
switch (num){
case 1:
    real();
    misarchivos();
    break;
case 2:
    Sleep(1000);
    cout<<"\nNo se encuentra la red de internet. Por favor, conectese a internet para continuar.\n\n"<<endl;
Sleep(1000);
    system("pause");
    real();
    menuprincipal();
    break;
case 3:
    Sleep(1000);
    cout<<"\nError 1250346. Contacte con el soporte tecnico.\n\n"<<endl;
    Sleep(1000);
    system("pause");
    real();
    menuprincipal();
    break;
case 4:
    ubicacion();
    break;
case 5:
    admin();
    break;
default:
    Sleep(1000);
    cout<<"No se ha introducido un numero valido. Intentelo de nuevo."<<endl;
    choose();
    break;
}

}
void chooseadmin(){
cout<<"\nIntroduce el numero del menu elegido (¡Cuidado! No introducir ninguna letra): "<<flush;
int num;
cin >> num;
switch (num){
case 1:
    real();
    misarchivos();
    break;
case 2:
    Sleep(1000);
    cout<<"\nNo se encuentra una red de internet. Por favor, conectese a internet para continuar"<<endl;
    Sleep(1000);
    system("pause");
    real();
    menuadmin();
    break;
case 3:
    Sleep(1000);
    cout<<"\nError 1250346. Contacte con el soporte tecnico."<<endl;
    Sleep(1000);
    system("pause");
    real();
    menuadmin();
    break;
case 4:
    real();
    bunker();
    break;
case 5:
    real();
    ajustes();
    break;
default:
    Sleep(1000);
    cout<<"\nNo se ha introducido un numero valido. Intentelo de nuevo."<<endl;
    choose();
    break;
}

}

int main()
{

//contrasena_ini();
//preguntas_reconocimiento();
menuprincipal();


    return 0;
}
