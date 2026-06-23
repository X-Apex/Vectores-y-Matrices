#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int A[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    vector<int> v;
    for(int j=0;j<n;j++) v.push_back(A[0][j]);          // fila superior
    for(int i=1;i<m;i++) v.push_back(A[i][n-1]);        // columna derecha
    for(int j=n-2;j>=0;j--) v.push_back(A[m-1][j]);     // fila inferior
    for(int i=m-2;i>0;i--) v.push_back(A[i][0]);        // columna izquierda
    cout<<"Vector de bordes: ";
    for(int x:v) cout<<x<<" ";
    return 0;
}
