#include <iostream>
using namespace std; //PROGRAMA PARA LEER Y ORDENAR NOMBRES ALFABÉTICAMENTE

int main() {
    int MAX = 5;
    char nombres[MAX][50];
    char aux;

    cout << "Ingrese " << MAX << " nombres:" << endl;

    for (int i = 0; i < MAX; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin.getline(nombres[i], 50);
    }
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = 0; j < MAX - i - 1; j++) {
            int k = 0;
            while (nombres[j][k] == nombres[j + 1][k] && nombres[j][k] != '\0') {
                k++;
            }
            if (nombres[j][k] > nombres[j + 1][k]) {
                char aux[50];
                for (int l = 0; l < 50; l++) {
                    aux[l] = nombres[j][l];
                    nombres[j][l] = nombres[j + 1][l];
                    nombres[j + 1][l] = aux[l];
                }
            }
        }
    }

    cout << "\nNombres ordenados alfabéticamente:" << endl;
    for (int i = 0; i < MAX; i++) {
        cout << nombres[i] << endl;
    }

    return 0;
}