#include <iostream>
using namespace std;

int main(){
    int n, v, m = 0x80000000;
    cin >> n;
    if (n <100 && n >= 1 ){
        for (int i = 0; i < n; i++){
            cin >> v;
            if (v > m){
                m = v;
            }
        }
        cout << m;
    }
}
