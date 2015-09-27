#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        for (int i = n - 1; i > 0; i--){
            swap(a[i],a[i-1]);
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

}
