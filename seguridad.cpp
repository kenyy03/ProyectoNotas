#include <iostream>
#include <stdlib.h>

using namespace std;


string cinPassword = "",defaulPassword="admin";

bool login () {
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        	cout << "Bienvenido a" << endl;
	
            cout << "*** REGISTRO NOTAS ***"<<endl;
            cout << ""<<endl;
            
            cout << endl;
            cout << endl;
            cout << endl;

        if (intentos == 3) {
            cout << "No se ha podido validar su password, por favor contacte al administrador del sistema " 
            << endl;

            return false;
        }

        cout << "Ingrese su password: ";
        cin >> cinPassword;

        if (cinPassword == defaulPassword) {
            system("cls");
            return true;
        }

        intentos++;
    }
     
    return false;
}

bool changePassword()
{
    system("cls");
    cout<<"Ingrese su password actual: "<<endl<<"---> ";
    cin>> cinPassword;

    if(cinPassword == defaulPassword)
    {
        cout<<"Ingrese su nueva password: "<<endl<<"---> ";
        cin>> cinPassword;
        defaulPassword = cinPassword;
        return true;   
    }
    else{cout<<"Accion Fallida"<<endl<<endl; return false;}
    system("pause");
}