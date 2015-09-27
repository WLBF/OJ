#include<stdio.h>
int main()
{
  int n,x,p;
  double d;
  d = 0.85;
  p = 95;
  x = 300;
  scanf("%d",&n);
  if (n*p>=x)
    printf("%.2f", n*p*d);
  else 
    printf("%.2f", n*p*1.0);
}
