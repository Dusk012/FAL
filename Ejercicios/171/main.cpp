#include <iostream>
using namespace std;

long long int montanyas[100000];

bool casoDePrueba() {

    int num;
    
    //leer caso de prueba
    cin >> num;
    if (num == 0)//es el caso que marca el final
        return false;
    else {
        int abadias = 1;
        

        for (int i = 0; i < num; i++) {
            cin >> montanyas[i];
        }

        long long int maxAltura = montanyas[num - 1];

        for (int i = num-2; i >= 0; i--) {
            if (montanyas[i] > maxAltura) {
                abadias++;
                maxAltura = montanyas[i];
            }
        }

        cout << abadias << endl;
        return true;
    }

} // casoDePrueba

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}