#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>

using namespace std;

int exchange(int a[5][5], int n, int m){
    if (n >= 0 && n < 5 && m >= 0 && m < 5){
            swap(a[n], a[m]);
            return 1;
    }
    else {
        return 0;
    }
}


int main(){
    int a[5][5], n, m;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
        }
    }
    cin >> n >> m;
    int flag = exchange(a, n, m);
    if (flag){
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++){
                cout<< setw(4)<< a[i][j];
            }
            cout << endl;
        }
    }
    else{
        cout<< "error" << endl;
    }
}
