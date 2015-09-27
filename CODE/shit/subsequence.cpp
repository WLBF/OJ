#include<stdio.h>
int main()
{
  int n = 1,m = 1,count = 0;
  while (1)
  {
    count++;
    double sum = 0.0;
    long long mult = 1;
    scanf("%d %d",&n,&m);
    if (!(n||m)) break;
    for (;n <= m; n++)
    {
      mult = n;
      sum += 1.0/(mult*mult);
    }
    printf("Case %d:%.5f\n",count,sum);
  }
}
