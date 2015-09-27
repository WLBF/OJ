#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void unpair(int idx, char *str){
    char c;
    c = str[idx];
    if(c != '\0'){
        if (c == ')'){
            int i, flag = 0;
            for(i = idx; i >=0; i--){
                if(str[i]=='('){
                    flag = 1;
                    break;
                }
            }
            if (flag){
                str[i] = '*';
                str[idx] = '*';
            }


        }
        unpair(idx+1, str);
    }
}

int main(){
    char str[110];
    while(cin.getline(str,110)){
        int len = strlen(str);
        cout << str << endl;
        unpair(0, str);
        for(int i = 0; i < len; i++){
            if (str[i]=='(') cout << "$";
            else if (str[i] == ')') cout << '?';
            else cout << ' ';
        }
        cout << endl;
    }
}
