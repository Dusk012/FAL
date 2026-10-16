#include <iostream>
#include <vector>
using namespace std;

bool casoDePrueba() {

    int casos;
    //leer caso de prueba
    cin >> casos;
    if (!casos)//es el caso que marca el final
        return false;
    else {
        
        int total = 0;
        int j = 0;
        vector<int> ganancias(casos);

        for(int i = 0; i < casos; i++){
            int gana;
            cin >> gana;
            ganancias[i] = gana;
            total += gana;
        }

        while(j < casos && ganancias[j] != total - ganancias[j]){
            total -= ganancias[j];
            j++;
        }

        if(j < casos || ganancias[casos-1] == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        return true;
     }

} // casoDePrueba

int main() {

    while(casoDePrueba()) {
    }
  
    return 0;
}