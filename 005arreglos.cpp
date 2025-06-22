#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    int numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int mayor = numeros[0];
    int menor = numeros[0];
    int repMayor = 0;
    int repMenor = 0;

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor){
            mayor = numeros[i];
        }
        if (numeros[i] < menor){
            menor = numeros[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (numeros[i] == mayor){
            repMayor++;
        }
        if (numeros[i] == menor){
            repMenor++;
        }
    }

    cout << "\nEl número mayor es: " << mayor << " y se repite " << repMayor << " veces" << endl;
    cout << "El número menor es: " << menor << " y se repite " << repMenor << " veces" << endl;

    return 0;
}
