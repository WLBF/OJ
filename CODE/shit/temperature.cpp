#include<stdio.h>
int main()
{
  float f,c;
  scanf("%f", &c);
  f = (c - 32.0)*5.0/9.0;
  printf("%.3f\n",f);
}
