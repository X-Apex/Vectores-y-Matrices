#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    cout << "Ingrese el número a multiplicar: ";
    cin >> k;
    int v[n];
    cout << "Ingrese " << n << " elementos:" << endl;
    for(int i=0; i<n; i++) cin >> v[i];
    cout << "Vector resultante: ";
    for(int i=0; i<n; i++) cout << v[i]*k << " ";
    return 0;
}
