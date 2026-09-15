#include <iostream>
using namespace std;

int devolverUltimoDigito(int n) {
    while (n >= 10) {
        n = n % 10;
    }

    return n;
}

int factorialLast(int n) {

    if (n >= 5) return 0;

    if (n == 0 || n == 1) return 1;

    return devolverUltimoDigito(factorialLast(n - 1) * n);
}

void casoDePrueba() {

    int n;
    cin >> n;

    cout << factorialLast(n) << endl;

    
} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }

    return 0;
}