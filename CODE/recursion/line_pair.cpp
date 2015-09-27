#include <iostream>
#include <cstdio>
using namespace std;

char temp[110];

void pairline(int idx){
    char c;
    c = temp[idx];
    if (c != '\0'){
        if (c == ')'){
            int i;
            for(i = idx; i >=0; i--){
                if(temp[i]=='('){
                    temp[i] = 0;
                    break;
                };
            }
            printf("%d %d\n", i, idx);
        }
        pairline(idx + 1);
    }
}


int main(){
    cin.getline(temp,110);
    pairline(0);


}
