#include <iostream>
#include <stdlib.h>

using namespace std;


void mostrarAcumulados()
{
    system("cls");
    struct Notas
    {
        string name;
        double notas[3];
    }
    notaClase1 = {"Lenguaje de Programacion I", {90,95,92}},
    notaClase2 = {"Sistemas Operativos", {92,92,92}},
    notaClase3 = {"Recursos Humanos en Informatica", {93,95,90}};

    cout<<"              *** ACUMULADOS ***"<<endl;
    cout<<"          -------------------------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"          Nombre     "<<"         Notas   "<<endl;
    cout<<endl;
    cout<<notaClase1.name<<"     | "<<notaClase1.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase1.notas[i];
    }
    cout<<endl;
    
    cout<<notaClase2.name<<"            | "<<notaClase2.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase2.notas[i];
    }
    cout<<endl;
    
    cout<<notaClase3.name<<"| "<<notaClase3.notas[0];
    for(unsigned short i=1; i<3; i++)
    {
        cout<<", ";
        cout<<notaClase3.notas[i];
    }
    cout<<endl;
    cout<<endl;
    system("pause");
}