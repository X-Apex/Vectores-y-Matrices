#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    cout << "Ingrese número k: ";
    cin >> k;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    cout << "Vector resultante: ";
    for(int i=0; i<n; i++) cout << v[i]*k << " ";
    return 0;
}
