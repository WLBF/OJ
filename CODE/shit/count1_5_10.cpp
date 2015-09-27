#include <iostream>
using namespace std;

int main() {
    int n, v, n1 = 0, n5 = 0, n10 = 0;
    cin >> n;
    if (n < 100 && n > 1){
        for (int i =0; i < n; i++){
            cin >> v;
            if (v == 1){
                n1 += 1;
            }
            if (v == 5){
                n5 += 1;
            }
            if (v == 10){
                n10 += 1;
            }
        }
        cout<<n1<<"\n";
        cout<<n5<<"\n";
        cout<<n10<<"\n";
    }
}

