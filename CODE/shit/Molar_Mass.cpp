#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX 10000
const float ele[] = {1.008, 12.01, 16.00, 14.01};
int Mass(char element) {
    switch (element) {
           case 'H':
                   return 0;
                   break;
           case 'C':
                   return 1;
                   break;
           case 'O':
                   return 2;
                   break;
           case 'N':
                   return 3;
                   break;
    }
}



int main(){
    int num;
    float ans[1000];
    float result;
    scanf("%d", &num);


     //float test;
     //test = Mass('H');
     //printf("%f", test);
     //printf("%f", ele[Mass('H')]);
     char s[MAX] = {0};
     for(int h = 0; h < num; h++){
         scanf("%s", s);
         result = 0.0;
         int len = strlen(s);
         //printf("%s  %d   %f\n", s, len,result);
         //printf("%f", ele[Mass(s[0])]);
         for (int i = 0; i < len -1; i++) {
             if (isalpha(s[i])) {
                 if (isalpha(s[i + 1])) result += ele[Mass(s[i])];
                 else{
                    int x , y = 0;
                    x = i + 1;
                    char temp[1000];
                    while(isdigit(s[x])){
                            temp[y] = s[x];
                            x++;
                            y++;
                    }
                    int numb = 0;
                    for(int f = 0; f < y; f++){
                        int kkk = 1;
                        for(int z = 0; z < y - f -1 ; z++) kkk *= 10;
                        numb += (temp[f] - 48) * kkk;
                        //printf("%d\n", numb);
                    }
                    //printf("%d\n", numb);
                    result += numb * ele[Mass(s[i])];
                    //printf("%f\n", result);
                 }
             }
             //printf("%d\n", s[i+1]);
         }
         if (isalpha(s[len - 1])) result += ele[Mass(s[len - 1])];
         ans[h] = result;

     }
     for(int i = 0; i < num; i++) printf("%.3f\n", ans[i]);
}
