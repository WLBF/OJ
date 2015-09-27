#include<stdio.h>
#define maxn 10000
int num, time, wrong, score;
int result[maxn] = {0};
int main() {
   scanf("%d", &num);
   for (int i = 0; i < num; i++) {
       for (int j = 0; j < 4; j++){
           scanf("%d %d",&time, &wrong);
           score = ((250 - time)*(4 + 2*j) - 50*wrong);
           if (score < 200*(2 + j)) score = 200*(2 + j);
           result[i] += score;
       }
   }
   for (int i = 0; i < num; i++) printf("Case #%d: %d\n", (i+1), result[i]);
   
}
