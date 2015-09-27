#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char s[505];
    gets(s);

    int maxw = 0, tmp = 0, lo = 0, hi = 0;
    for(int i = 0; i < 505; i++){

        if (s[i] != ' ' && s[i] != '.'){
            tmp++;
            }
        else{

             if (tmp > maxw){
                    maxw = tmp;
                    hi = i;
                    lo = hi - tmp;
                }
             tmp = 0;
        }
        if (s[i] == '.'){
            break;
        }
    }

    for (int i = lo; i < hi; i++){
        cout << s[i];
    }

}
