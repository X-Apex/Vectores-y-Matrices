#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    int v[n];
    cout << "Ingrese " << n << " elementos:" << endl;
    for(int i=0; i<n; i++) cin >> v[i];
    int minimo = v[0];
    for(int i=1; i<n; i++) if(v[i]<minimo) minimo=v[i];
    cout << "El mínimo es: " << minimo << endl;
    return 0;
}
