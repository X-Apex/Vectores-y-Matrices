#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de los vectores: ";
    cin >> n;
    int v[n], w[n], producto = 0;
    cout << "Ingrese los elementos del primer vector:" << endl;
    for(int i=0; i<n; i++) cin >> v[i];
    cout << "Ingrese los elementos del segundo vector:" << endl;
    for(int i=0; i<n; i++) cin >> w[i];
    for(int i=0; i<n; i++) producto += v[i]*w[i];
    cout << "El producto escalar es: " << producto << endl;
    return 0;
}
