#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main(){
    char str[11], sub[5], input[20];

    while(gets(input)){
        int hi = 0;
        for (int i = 0; i < strlen(input); i++){
            if (input[i] != ' '){
                str[i] = input[i];
            }
            else {
                hi = i;
                break;
            }
        }
        for (int i = 1; i <= 3;i++){
            sub[i-1] = input[hi+i];
        }

        int p = 0, ascmax = 0;
        //cout << hi << endl;
        for (int i = 0; i < hi; i++){
            if ((int)str[i] > ascmax){
                ascmax = (int)str[i];

                p = i;
            }
        }
        for (int i = 0; i <= p; i++) cout << str[i];
        for (int i = 0; i < 3; i++)  cout << sub[i];
        for (int i = p + 1; i < hi; i++) cout <<str[i];
        cout << endl;
    }


}
