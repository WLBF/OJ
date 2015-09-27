#include <iostream>

using namespace std;

int main(){
    int n, a[110];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i <= n; i++){
        if (i == n){
            cout << "N" <<endl;
            break;
        }
        if(a[i] == i){
            cout << i;
            break;
        }
    }
}
