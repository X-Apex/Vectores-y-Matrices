#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Ingrese filas y columnas de la matriz: ";
    cin >> m >> n;
    int A[m][n];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    for(int j=0;j<n;j++){
        int suma=0;
        for(int i=0;i<m;i++) suma+=A[i][j];
        cout<<"Suma columna "<<j+1<<": "<<suma<<endl;
    }
    return 0;
}
