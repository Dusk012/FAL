#include <iostream>
using namespace std;

long long int trenes[600000];

bool casoDePrueba() {

    int num;
    int grupos = 0;
    long long int velLimintante = 0;

    if (!cin)
        return false;
    else {

        cin >> num;

 
        for (int i = 0; i < num; i++) {
            cin >> trenes[i];
        }

        if (num == 0) {
            long long int dummy;
            cin >> dummy;
            cout << grupos << endl;
            return true;
        }

        velLimintante = trenes[num - 1];
        grupos++;

        for (int i = num - 2; i >= 0; i--) {
            if (trenes[i] < velLimintante) {
                grupos++;
                velLimintante = trenes[i];
            }
        }

        cout << grupos << endl;

        return true;
    }

    return true;
}

int main() {

    while (casoDePrueba()) {
    }

    return 0;
}