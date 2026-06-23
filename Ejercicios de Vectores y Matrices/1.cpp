#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    int v[n];
    double suma = 0;
    for(int i=0; i<n; i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> v[i];
        suma += v[i];
    }
    cout << "Media = " << suma/n << endl;
    return 0;
}