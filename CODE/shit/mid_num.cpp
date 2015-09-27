#include<iostream>
#include<algorithm>
using namespace std;

#define MAXM 15000

int  a[MAXM], ans[MAXM];

int main(){
    int n, k = 0;
    for (;;){
        cin >> n;
        if (n == 0){
            break;
        }

        for (int i = 0; i < n; i++){
            cin >> a[i];
            }
        sort(a, a + n -1);

        if (n/2*2 == n){
            ans[k] = (a[n/2]+a[n/2-1])/2;
            k++;
        }
        else {
            ans[k] = a[n/2];
            k++;
        }

    }
    for (int i = 0; i < k; i++){
        cout << ans[i] <<endl;
    }
}
