#include <iostream>
#include <vector>

using namespace std;

void casoDePrueba() {

    int casos;
    int ret = -1;
    cin >> casos;
    vector<int> v(casos);

    int total = 0;

    for(int j = 0;  j < casos; j++){
        int num;
        cin >> num;
        v[j] = num;
        total += num;
    }

    int i = 0;
    while(i < casos){
        if(v[i] == total - v[i]){
            ret = i;
        }
        total -= v[i];
        i++;
    }

    if(ret != -1){
        cout << "Si " << ret << endl;
    }
    else{
        cout << "No" << endl;
    }

} // casoDePrueba

int main() {
    unsigned int numCasos;

    cin >> numCasos;
    for (unsigned int i = 0; i < numCasos; ++i) {
        casoDePrueba();
    }
  
    return 0;
}