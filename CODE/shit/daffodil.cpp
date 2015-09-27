#include<stdio.h>
int main()
{
  int a,b,c,n;
  for (c = 0;c <=10;c++)
    for (b = 0;b <=10;b++)
      for (a = 0;a <=10;a++)
        {
          n = a*a*a + b*b*b +c*c*c;
          if ((n>999)||(n < 100)) continue;
          else printf("%d\n",n);
        }
}
