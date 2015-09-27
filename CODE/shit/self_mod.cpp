#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n >= 10 && n < 100){
        for (int i = 10; i <= n; i++){
            if (i % (i/10 + i%10) == 0){
                cout << i << endl;
            }
        }
    }
}
