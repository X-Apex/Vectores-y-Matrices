#include <iostream>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int A[m][n];
    for(int i=0;i<m;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    for(int i=0;i<m;i++){
        int suma=0;
        for(int j=0;j<n;j++) suma+=A[i][j];
        cout<<"Fila "<<i+1<<": "<<suma<<endl;
    }
    return 0;
}
