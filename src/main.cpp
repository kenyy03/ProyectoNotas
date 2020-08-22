#include <iostream>
#include <stdlib.h>
#include "src/Login.h"

using namespace std;

int main(int argc, char const *args[])
{
    bool response = Login();

    if(response)
    {
        cout<<"print something "<<endl;
    }
    return 0;
}