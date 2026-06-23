#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz (n x n): ";
    cin >> n;

    int A[n][n];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> A[i][j];
        }
    }

    int suma = 0;
    cout << "\nMatriz con elementos de la 'N' resaltados:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            bool esN = (j==0) || (j==n-1) || (i==j); // primera col, última col, diagonal principal
            if(esN){
                cout << setw(4) << "[" << A[i][j] << "]";
                suma += A[i][j];
            } else {
                cout << setw(4) << A[i][j];
            }
        }
        cout << endl;
    }

    cout << "\nSuma de elementos que forman la letra N = " << suma << endl;
    return 0;
}

