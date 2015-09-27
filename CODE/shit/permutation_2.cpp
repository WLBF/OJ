#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++ )
        printf("%d\n",i*2);

    scanf("%d",&n);
    for ( i = 2; i <= n*2; i += 2 )
        printf("%d\n",i);
    

    double k;
    for (k = 0; k != 10 ; k+=0.1)
       printf("%.1f\n", k);



    return 0;
}
