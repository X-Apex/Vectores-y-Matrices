#include <iostream>
using namespace std;

int main() {
    int n; double k;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    cout << "Ingrese número real k: ";
    cin >> k;
    double v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    cout << "Vector resultante: ";
    for(int i=0; i<n; i++) cout << v[i]+k << " ";
    return 0;
}
