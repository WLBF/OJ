#include <iostream>

using namespace std;


int count_bigger(int a[], int n, int i){
    int c = 0;
    for (int j = 0; j < n; j++){
        if (j != i){
            if (a[j] > a[i]){
                c++;
            }
        }
    }
    return c;
}

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        if (count_bigger(a, n, i) == k-1){
            cout << a[i];
            break;
        }
    }
}
