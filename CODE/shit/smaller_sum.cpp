#include <iostream>

using namespace std;

int main(){
    int a, v, sum = 0;
    cin >> a;
    for(int i = 0; i < 5; i++){
        cin >> v;
        if (v < a && v < 100){
            sum += v;
        }
    }
    cout << sum << endl;
}
