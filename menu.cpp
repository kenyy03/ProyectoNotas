#include <iostream>
#include <stdlib.h>

using namespace std;

void menu() {
    bool salir = false;

    while(salir == false) {
        int opcion = 0;

        cout << "MENU PRINCIPAL" << endl;
		cout << "--------------" << endl;
		cout << endl;
		cout << "1 - Mostrar mis clases" << endl;
		cout << "2 - Buscar mis clases" << endl;
		cout << "3 - Mostrar mis acumulados" << endl;
		cout << "4 - Rendimiento Final" << endl;
		cout << "5 - Reporte de Rentas" << endl;
		cout << "6 - Salir" << endl;
		
		cout << endl;
		cout << endl;				
		cout << "Ingrese un numero del menu y presione enter --> ";
		cin >> opcion;

        switch (opcion)
        {
        case 1:
            break;
        case 2: 
            break;
        case 3: 
            break;
        case 4: 
            break;
        case 5:
            salir = true;
        default:
            break;
        }

        system("cls");

    }

}