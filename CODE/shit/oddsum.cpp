#include <iostream>

using namespace std;

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    if (a <= b){
        if ((a/2)*2==a){
            a += 1;
        }
        if ((a/2)*2 == a){
            a += 1;
        }
        if ((b/2)*2 == b){
            b -= 1;
        }
        for (int i = a; i <= b; i += 2) {
            sum += i;
        }
        cout << sum;
    }

}
