#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int A[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    int suma=0;
    for(int i=0;i<m;i++){
        suma+=A[i][0];          // primera columna
        suma+=A[i][n-1];        // última columna
        suma+=A[i][i];          // diagonal principal
    }
    cout<<"Suma de elementos que forman N="<<suma<<endl;
    return 0;
}
