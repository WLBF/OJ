#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    int n, c[5] = {0};
    char s[90];
    gets(s);
    n = strlen(s);
    for (int i = 0; i < n; i++){
        if (s[i] == 'a'){c[0]++;}
        if (s[i] == 'e'){c[1]++;}
        if (s[i] == 'i'){c[2]++;}
        if (s[i] == 'o'){c[3]++;}
        if (s[i] == 'u'){c[4]++;}
    }
    for (int i = 0; i < 5; i++){
        cout << c[i] << " ";
    }
    cout << endl;

}
