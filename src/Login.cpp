#include <iostream>

using namespace std;

bool login () {
    string password = "";
    int intentos = 0;

    while (intentos <= 3) {
        system("cls");

        	cout << "Bienvenido a" << endl;
	
            cout << "__________              .__          __                                 __                 "<<endl;
            cout << "\______   \ ____   ____ |__| _______/  |________  ____     ____   _____/  |______    ______"<<endl;
            cout << " |       _// __ \ / ___\|  |/  ___/\   __\_  __ \/  _ \   /    \ /  _ \   __\__  \  /  ___/"<<endl;
            cout << " |    |   \  ___// /_/  >  |\___ \  |  |  |  | \(  <_> ) |   |  (  <_> )  |  / __ \_\___ \ "<<endl;
            cout << " |____|_  /\___  >___  /|__/____  > |__|  |__|   \____/  |___|  /\____/|__| (____  /____  >"<<endl;
            cout << "        \/     \/_____/         \/                            \/                 \/     \/ "<<endl;
            cout <<endl;
            
            cout << endl;
            cout << endl;
            cout << endl;

        if (intentos == 3) {
            cout << "No se ha podido validar su password, por favor contacte al administrador del sistema " 
            << endl;

            return false;
        }

        cout << "Ingrese su password: ";
        cin >> password;

        if (password == "admin") {
            system("cls");
            return true;
        }

        intentos++;
    }
     
    return false;
}