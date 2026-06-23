#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>A[i][j];
    int suma=0;
    for(int i=0;i<n;i++) suma+=A[i][i];
    cout<<"Suma diagonal principal="<<suma<<endl;
    return 0;
}
