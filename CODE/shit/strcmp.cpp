#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char a[90], b[90];
    gets(a);
    gets(b);
    int la = strlen(a);
    int lb = strlen(b);
    for (int i = 0; i < la; i++){
        if (a[i] >= 65 && a[i] <= 90){
            a[i] += 32;
        }
    }
    for (int i = 0; i < lb; i++){
        if (b[i] >= 65 && b[i] <= 90){
            b[i] += 32;
        }
    }
    int f = strcmp(a,b);
    if (f < 0){cout << "<" << endl;}
    else if (f > 0){cout << ">" << endl;}
    else {cout << "=" << endl;}
}
