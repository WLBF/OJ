#include<iostream>

using namespace std;

typedef long long int LL;
LL p[250][250] = {0};

LL fun(int n, int k){
    if((n/2*2 == n && n/2 ==k) || n == k){
        p[n][k] = 1;
        return 1;
    }
    else if(k <= n/3 && p[n][k] == 0){
        LL val = 0;
        for(int i = k; i <= (n-2*k)/3; i++){
            if (i != 0) val += fun(n-2*k,i);
        }
        if((n-2*k)/2*2==(n-2*k) && k <= (n-2*k)/2) val += fun(n-2*k, (n-2*k)/2);
        val += fun(n-2*k, n-2*k);
        p[n][k] = val;
        return val;
    }
    else return p[n][k];
}


int main(){

    // Initialize 2D array p

    p[0][0] = 1;
    p[1][0] = 1;
    p[1][1] = 1;

    // Get input
    int n, l[1000];
    for(int i = 0;;i++){
        cin >> l[i];
        if(l[i] == 0) break;
    }

    for(int i = 0;;i++){
        if(l[i] == 0) break;
        fun(l[i], 0);
        cout << l[i] << " " << p[l[i]][0] << endl;
    }

    /*
    for (int i = 0; i <=6 ;i++){
        for(int j = 0; j <=6; j++){
            cout << p[i][j] << "  ";
        }
        cout << endl;
    }
    */
}
