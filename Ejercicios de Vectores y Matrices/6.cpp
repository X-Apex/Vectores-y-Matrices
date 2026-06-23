#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    int minimo = v[0];
    for(int i=1; i<n; i++) if(v[i]<minimo) minimo=v[i];
    cout << "Mínimo = " << minimo << endl;
    return 0;
}
