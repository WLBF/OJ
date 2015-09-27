#include<stdio.h>
#define MAXN 50000
#define MOD 998244353

int Case, num, result;
int array[MAXN] = {0};
int ans[10000];

int lowbit(int x, int mask){
   if (x == 0) mask = 0;
   else {
      while((x & mask) == 0){
         mask = mask << 1;
      }
   }
   return mask;
}

int main(){

   //printf("%d", lowbit(4, 1));
   scanf("%d", &Case);
   for (int h = 0; h < Case; h++){
       scanf("%d", &num);
       
       for (int j = 0; j < num; j++){
           scanf("%d", array+j);
       }
       //for(int j = 0; j< num; j++) printf("%d  ", array[j]);
       result = 0; 
       for (int i = num-1; i >=0 ; i--) {
          for (int j = i-1; j >=0; j--){
             result += lowbit(array[i] ^ array[j], 1)% MOD;
             ans[h] = (result *2)%MOD;
             //printf("%d\n", ans[h]);
          }
       }
   }
   for (int i = 0; i < Case; i++) printf("Case #%d: %d\n", i+1, ans[i]);
}
