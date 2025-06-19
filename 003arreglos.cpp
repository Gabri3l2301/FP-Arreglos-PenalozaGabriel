#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    char frase[100];
    char letra;
    int contador = 0;

    cout << "Ingrese una frase:" << endl;
    cin.getline(frase, 100);
    cout << "Ingrese la letra que desea saber cuántas veces se repite: ";
    cin >> letra;

    for (int i = 0; frase[i] != '\0'; i++){
        if (letra == frase[i]){
            contador++;
        }
    }

    cout << "\nLas veces que se repite la letra '" << letra << "' es de " << contador << " veces" << endl;
    return 0;
}