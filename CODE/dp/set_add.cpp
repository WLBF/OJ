#include<iostream>
#include<cstdio>

#define MAXM 10000
using namespace std;

int p[MAXM], q[MAXM], m[2][MAXM];

void func(int b, int a, int s){
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(i==0 && j==0) m[1][j] = (p[j] + q[i] == s);
            else if(i==0 && j>0) m[1][j] = m[1][j-1] + (p[j] + q[i] == s);
            else if(i > 0 && j==0) m[1][j] = m[0][j] + (p[j] + q[i] == s);
            else if(i >0 && j >0) m[1][j] = m[0][j] + m[1][j-1] - m[0][j-1] + (p[j] + q[i] == s);

        }
        for(int j = 0; j < a; j++) m[0][j] = m[1][j];
    }
}


int main(){
    int n, a, b, s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        cin >> a;
        for (int i = 0; i < a; i++) cin >> p[i];
        cin >> b;
        for (int i = 0; i < b; i++) cin >> q[i];
        func(b, a, s);
        cout << m[0][a-1]<<endl;
    }
}
