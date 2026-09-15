#include <iostream>
using namespace std;

long long int estudiantes[110000];

bool casoDePrueba() {

    int num;
    //leer caso de prueba
    cin >> num;
    if (num == 0)//es el caso que marca el final
        return false;
    else {
        long long int total = 0;
        long long int parejas = 0;

        for (int i = 0; i < num; i++) {
            cin >> estudiantes[i];
            total += estudiantes[i];
        }

        for (int i = 0; i < num - 1; i++) {
            int alumnos = estudiantes[i];
            total -= alumnos;
            parejas += alumnos * total;
        }

        cout << parejas << endl;

        return true;
    }

} // casoDePrueba

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}