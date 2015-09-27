#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 0 && n <= 100){
        if (n >= 95 && n <= 100) cout << 1;
        if (n >= 90 && n < 95) cout << 2;
        if (n >= 85 && n < 90) cout << 3;
        if (n >= 80 && n < 85) cout << 4;
        if (n >= 70 && n < 80) cout << 5;
        if (n >= 60 && n < 70) cout << 6;
        if (n < 60) cout << 7;
    }
}
