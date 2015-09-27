#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int get_index(char c){
     if((int)c > 90){
        return (int)c - 97;
     }else{
        return (int)c - 65;
     }
}

int get_second_val(int *s, int n){
    int maxm = 0x80000000;
    int second = 0x80000000;
    for(int i = 0; i < n; i++){
        if (s[i]> maxm){
            maxm = s[i];
        }
    }
    for(int i = 0; i < n; i++){
        if (s[i]> second && s[i] != maxm){
            second = s[i];
        }
    }
    return second;
}

int main(){
    char s[500];
    int times[26] = {0};
    gets(s);
    int len = strlen(s);

    for (int i =0; i < len; i++){
        if (s[i] != '&'){
            times[get_index(s[i])] += 1;
        }
    }
    //cout << times[0]<<times[1]<< times[2]<< endl;
    int second_val = get_second_val(times, 26);
    for(int i = 0; i< len; i++){
        if (s[i] != '&' && times[get_index(s[i])]==second_val){
            if ((int)s[i]<97){
                s[i] += 32;
            }
            printf("%c+%c:%d\n",s[i]-32,s[i],second_val);
            break;
        }
    }
}
