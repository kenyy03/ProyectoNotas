#include <stdlib.h>
#include <iostream>
#include "seguridad.h"
#include "menu.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool respuesta = login();

    if (respuesta) {
        menu();
    }
    else
    {
        cout<<"Usuario o contrasena incorrectos"<<endl;
    }
    
    return 0;
}