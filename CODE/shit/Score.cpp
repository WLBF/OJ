#include<stdio.h>
#include<string.h>
int num ;
int counter,str_len;
char c[80];


int main(){
    scanf("%d", &num);
    int s[1000][90] = {0};
    for(int i = 0; i < num; i++){
        scanf("%s", c);
        str_len = strlen(c);
        counter = 1;
        for(int j = 0; j < str_len; j++){
            if(c[j] == 'O'){
                s[i][j] = counter;
                counter++;
            }
            else{
                s[i][j] = 0;
                counter = 1;
            }
        s[i][str_len] = 1984;
        }
    }

    for(int i = 0; i < num; i++){
        int j = 0, result = 0;
        while(s[i][j] != 1984){
            result += s[i][j];
            j++;
        }
        printf("%d\n", result);
    }

}
