#include<stdio.h>
#include<string.h>
int main()
{
    int abc,de,count = 0,x,y,z,ok;
    char s[20], buf[99];
    scanf("%s", s);
    for (abc = 100; abc <= 999; abc++)
        for (de = 10; de <= 99; de++)
            {
                x = abc*(de/10);
                y = abc*(de%10);
                z = abc*de;
                sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
                ok = 1;
                for (int i = 0; i <(strlen(buf)); i++)
                     if (strchr(s, buf[i]) == NULL) ok = 0;
                if (ok == 1)
                    {
                     printf("<%d>\n", ++count); 
                     printf("%5d\nX%4d\n-----\n%5d\n%d\n-----\n%d\n", abc, de, y, x, z);
                    } 
            }
      printf("The number of solutions = %d\n", count);
            
}
