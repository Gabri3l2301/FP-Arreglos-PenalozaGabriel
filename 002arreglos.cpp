#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    char frase[100];

    cout << "Ingrese la frase que desea hacer eco:" << endl;
    cin.getline (frase, 100);

    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] != ' '){
            cout << frase[i];
        }else {
            cout << endl;
        }
    }

    return 0;
}