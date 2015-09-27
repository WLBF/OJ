#include <iostream>

using namespace std;

int main(){
    int l, m, lo, hi;
    cin >> l >> m;
    int t[l+1];
    for (int i = 0; i <= l; i++){
        t[i] = 1;
    }
    for (int i =0; i < m; i++){
        cin >> lo >> hi;
        for (int j = lo; j <= hi; j++){
            t[j] = 0;
        }
    }
    int num = 0;
    for (int i = 0; i <= l; i++){
        if (t[i] == 1){
            num++;
        }
    }
    cout << num << endl;
}
