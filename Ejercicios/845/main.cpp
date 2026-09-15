#include <iostream>
using namespace std;

int dominos[300005];


bool sonContinuas(int primero, int segundo) {
    return (primero % 10) == (segundo / 10);
}

int datarNumero(int const digitoIzq, int const digDer, int *registro) {

    int pos = (digitoIzq * 10) + digDer;

    registro[pos]++;

    return registro[pos];
}

bool casoDePrueba() {
    int num;
    int compras = 0;
    int registro[77] = { 0 };
    int* ptrRegistro = registro;


    cin >> num;

    if (num == 0) {
        return false;
    }
    else {

        if (num == 1) {
            cin >> dominos[0];
            cout << "1" << endl;
            return true;
        }

        for (int i = 0; i < num; i++) {
            cin >> dominos[i];
        }

        compras = datarNumero(max(dominos[0] / 10, dominos[0] % 10),
            min(dominos[0] / 10, dominos[0] % 10),
            ptrRegistro);

        for (int i = 1; i < num; i++) {
            if (sonContinuas(dominos[i - 1], dominos[i])) {

                if (datarNumero(max(dominos[i] / 10, dominos[i] % 10),
                    min(dominos[i] / 10, dominos[i] % 10),
                    ptrRegistro) > compras) compras++;
            }
            else {
                cout << "ERROR" << endl;
                return true;
            }
        }

        cout << compras << endl;
    }

    return true;

}

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}