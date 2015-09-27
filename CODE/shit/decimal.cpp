#include<stdio.h>
int main()
{
  int a,b,c,count = 0;
  double div;
  while (1)
  {
    count++;
    scanf("%d %d %d",&a,&b,&c);
    if (a==0&&b==0&&c==0) break;
    div = (a*1.0)/(b*1.0);
    printf("Case %d: %.*lf\n",count,c,div);
  }
}
