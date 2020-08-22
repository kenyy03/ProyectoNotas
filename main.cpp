#include <stdlib.h>
#include <iostream>
#include "seguridad.h"

using namespace std;

int main(int argc, char const *argv[])
{
    bool respuesta = login();

    if (respuesta == true) {
        cout<<"print something"<<endl;
    }
    
    return 0;
}