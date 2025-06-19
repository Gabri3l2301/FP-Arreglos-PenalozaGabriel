#include <iostream>
#include <windows.h>
using namespace std;

int main (){
    SetConsoleOutputCP(CP_UTF8);
    char frase[50] = "cáceres patrimonio de la humanidad";
    
    for (int i = 0; frase[i] != '\0'; i++){
        if ((i == 0 || frase[i - 1] == ' ') && frase[i] >= 'a' && frase[i] <= 'z'){
            frase[i] = frase[i] - 32;
        }
    }

    cout << "Frase con mayúsculas iniciales: " << frase << endl;
    return 0;
}