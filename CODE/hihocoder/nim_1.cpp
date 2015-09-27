#include <stdio.h>  
int main()  
{  
    int a,b[100],i,c;  
   
    scanf("%d",&a);  
    for(i=0;i<a;i++)  
        scanf("%d",&b[i]);  
    c=0;  
    for(i=0;i<a;i++)  
    {  
        c=c^b[i];  
    }  
    if(c==0)  
        printf("Bob\n");  
    else  
        printf("Alice\n");  
}  
