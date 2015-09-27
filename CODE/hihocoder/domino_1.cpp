#include <stdio.h>
#include <string.h>
typedef long long LL;
const int N = 8;
const LL MOD = 12357;
int i = 0, j = 0, k = 0;

void matMul(LL a[][N], LL b[][N], LL c[][N]){
     
     LL ret[N][N];
     memset(ret, 0, sizeof(ret));
     for (i = 0; i < N; i++)
         for (j = 0; j < N; j++)
             for (k = 0; k < N; k++)
                 ret[i][j] =  (ret[i][j] + a[i][k] * b[k][j]) % MOD;
     for(i = 0; i < N; i++)
        memcpy(c[i], ret[i], sizeof(c[i]));
     }


void matPow(LL a[][N], int n){
     LL ret[N][N];
     memset(ret, 0, sizeof(ret));
     for(i = 0; i < N; i++) ret[i][i] = 1;
     while(n)
     {
        if(n & 1) matMul(ret, a, ret);
        matMul(a, a, a);
        n >>= 1;
     }


     for(i = 0; i < N; i++)
        memcpy(a[i], ret[i], sizeof(a[i]));
     }

int main(){
    
    int n;
    LL a[N][N];
    memset(a, 0, sizeof(a));
    while (scanf("%d", &n)){
       for (j = 0; j < N; j++)
           a[7 - j ][j] = 1;
       a[7][6] = 1;
       a[6][7] = 1;
       a[7][3] = 1;
       a[3][7] = 1;
                       
       matPow(a, n);
       printf("%lld\n", a[7][7] % MOD);
    }
}
