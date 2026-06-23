#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++) cin >> v[i];
    int maximo = v[0];
    for(int i=1; i<n; i++) if(v[i]>maximo) maximo=v[i];
    cout << "Máximo = " << maximo << endl;
    return 0;
}
