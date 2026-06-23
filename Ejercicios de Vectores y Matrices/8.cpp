#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Ingrese filas y columnas de la matriz: ";
    cin >> m >> n;
    int A[m][n];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    int menor=A[0][0], mayor=A[0][0];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++){
        if(A[i][j]<menor) menor=A[i][j];
        if(A[i][j]>mayor) mayor=A[i][j];
    }
    cout<<"Menor="<<menor<<" Mayor="<<mayor<<endl;
    return 0;
}
