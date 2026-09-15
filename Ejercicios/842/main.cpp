#include <iostream>
using namespace std;

void casoDePrueba() {

    int cuerdas = 0;

    for (int i = 3; i > 0; i--) {
		int entrada;
        cin >> entrada;
        cuerdas += entrada * i;
    }

	cout << cuerdas << endl;

} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }

    return 0;
}