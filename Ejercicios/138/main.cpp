#include <iostream>
using namespace std;

void casoDePrueba() {

    long long int num; 

    cin >> num;

    cout << (num / 5 ) + num / 25 << endl;

} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }

    return 0;
}