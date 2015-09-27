#include <iostream>

using namespace std;

int main(){
    int n, k, flag;
    cin >> n >> k;
    if (n < 1000){
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        flag = 0;
        for (int i = 0; i < n; i++){
            if (flag == 1){
                break;
            }
            int t = k - a[i];
            for (int j = 0; j < n; j++){
                if (j != i && a[j] == t){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1){
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}
