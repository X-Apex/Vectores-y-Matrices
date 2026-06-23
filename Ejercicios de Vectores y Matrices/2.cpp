#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int v[n], suma = 0;
    cout << "Ingrese " << n << " elementos:" << endl;
    for(int i=0; i<n; i++){
        cin >> v[i];
        suma += v[i]*v[i];
    }
    cout << "La suma de cuadrados es: " << suma << endl;
    return 0;
}
