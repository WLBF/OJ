#include <stdio.h>
int main()
{
    int n,s,a,b,i,j,na[10000],nb[10000],count;
    scanf("%d",&n);
    while(n--)
    {
        count=0;
        scanf("%d%d",&s,&a);
        for(i=0;i<a;i++)
            scanf("%d",&na[i]);
        scanf("%d",&b);
        for(i=0;i<b;i++)
            scanf("%d",&nb[i]);
        for(i=0;i<a;i++)
            for(j=0;j<b;j++)
                if(s==na[i]+nb[j])
                    count++;
        printf("%d\n",count);
    }
    return 0;
}