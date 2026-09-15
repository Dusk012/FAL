#include <iostream>
#include <string>
using namespace std;

char puzzle [600][600];

//char colorOriginal[256] = { '0' };

char colorCambiado[256] = {'0'};


bool casoDePrueba() {

    int fila, columna;
    //leer caso de prueba
    cin >> fila >> columna;
    if (!fila && !columna)//es el caso que marca el final
        return false;
    else {

        int pintores;

        for (int i = 0; i < fila; i++) {
            for (int j = 0; j < columna; j++) {
                char color;
                cin >> color;
                colorCambiado[color] = color;
                puzzle[i][j] = color;
            }
        }

        cin >> pintores;

        if (pintores) {
            for (int i = 0; i < pintores; i++) {
                char original, cambiado;
                cin >> original >> cambiado;

                for (char inicio = 'A'; inicio <= 'Z'; inicio++) {
                    if (colorCambiado[inicio] == original) {
                        colorCambiado[inicio] = cambiado;
                    }
                }
            }
        }

        for (int i = 0; i < fila; i++) {
            for (int j = 0; j < columna; j++) {
                cout << colorCambiado[puzzle[i][j]];
            }
            cout << endl;
        }


        return true;
    }

} // casoDePrueba

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}