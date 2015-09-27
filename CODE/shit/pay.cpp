#include <iostream>

using namespace std;

int main(){
    int n, k[6] = {};
    cin >> n;
    if (n > 0 && n < 1000){
        k[0] = n/100;
        n %= 100;
        k[1] = n/50;
        n %= 50;
        k[2] = n/20;
        n %= 20;
        k[3] = n/10;
        n %= 10;
        k[4] = n/5;
        n %= 5;
        k[5] = n;

        for(int i = 0; i < 6; i++){
            cout << k[i] << endl;
        }
    }
}
