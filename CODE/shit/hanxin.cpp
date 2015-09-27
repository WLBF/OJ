#include<stdio.h>
int main()
{
  int a[2];
  int i,count = 0,n;
  while (1)
   {
    count++;
    for (i = 0;i < 3; i++)  scanf("%d",&a[i]);
    int x = 0;
    for (n = 10; n < 100; n++)
     {
      if ((n%3==a[0])&&(n%5==a[1])&&(n%7==a[2]))
       {
        printf("Case %d: %d\n",count,n);
        x = 1;
       }
     }
    if (!x) printf("Case %d: No answer\n",count);
    printf("\n");
   }
}
