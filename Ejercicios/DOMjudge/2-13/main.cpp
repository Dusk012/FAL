#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool casoDePrueba() {

    //leer el inicio del caso de prueba (cin)
    if (!cin)
        return false;
    else {
        // CÓDIGO PRINCIPAL AQUÍ (incluyendo el resto de la lectura)
        int num;
        int j = 1;

        cin >> num;
        vector<int> v(num);

        for(int i = 0; i < num; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
       
        

        return true;
    }

} // casoDePrueba
int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}