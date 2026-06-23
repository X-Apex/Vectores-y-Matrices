#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    int v[n], suma = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        suma += v[i]*v[i];
    }
    cout << "Suma de cuadrados = " << suma << endl;
    return 0;
}
