#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño de los vectores: ";
    cin >> n;
    int v[n], w[n], producto = 0;
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<n; i++) cin >> w[i];
    for(int i=0; i<n; i++) producto += v[i]*w[i];
    cout << "Producto escalar = " << producto << endl;
    return 0;
}
