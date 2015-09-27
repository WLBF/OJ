
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int count1,count2;
int opnd[200];  //操作数的栈 
char optr[200];  //操作符的栈 
char opp[9] = {'+','-','*','/','(',')','#','/0'};  
int h[7][7] = {{1,1,-1,-1,-1,1,1},{1,1,-1,-1,-1,1,1},{1,1,1,1,-1,1,1},
                   {1,1,1,1,-1,1,1},{-1,-1,-1,-1,-1,0,-2},{1,1,1,1,-2,1,1},{-1,-1,-1,-1,-1,-2,0}}; 
                   // 优先级判断 
void push1(int x)  //进栈 
{
    opnd[count1++] = x;
}
void push2(int x)  
{
    optr[count2++] = x;
}
int pop1()  //出栈 
{
    count1--; 
    return opnd[count1];
}
char pop2()
{
    count2--;
    return optr[count2];
}
int computer(int x,int y, char ch)  //计算 
{
    switch(ch)
    {
        case '+':return x+y;
        case '-':return x-y;
        case '*':return x*y;
        case '/':return x/y;
    }
}
int record(char a,char b) //判断优先级 
{
    int ta,tb;
    int i;
    for(i=0; i<7; i++)
    {
        if( a == opp[i] )
           ta = i;
        if( b == opp[i] )
           tb = i;
    } 
    return h[ta][tb];
}
int result(char fir[],int plus) //算出结果 
{
    char c,ch;
    int x,y,i = 0;
    count1 = 0;
    count2 = 0;
    push2('#');
    while( fir[i]!='#' || optr[count2-1]!='#')
    {
        c = fir[i];
        if( isdigit(c) )
        {
            push1(c-'0');
            i++;
            continue;
        }
        if( isalpha(c) )
        {
            push1(c-'a'+plus);
            i++;
            continue;
        }
        if(c == '+' || c== '-'||c=='*' || c=='('||c==')'||c=='#')
        {
            switch( record(optr[count2-1],c) )
            {
                
                case -1: push2(c); i++; break;
                case 0 : pop2(); i++; break;
                case 1 : ch = pop2();
                         y = pop1();
                         x = pop1(); 
                         push1(computer(x,y,ch));
                         break;
            }
        }
        else
            i++;
    }
return opnd[count1-1];
}
int main(void)
{
    char c,ch;
    int length,i,x,y,plus,result1,result2,ncases;
    int len1,len2,flag;
    char fir[90],sec[90];
    scanf("%d",&ncases);
    getchar();
    while(ncases--)
    {
        gets(fir);
        gets(sec);
        len1 = strlen( fir );
        len2 = strlen( sec );
        fir[len1] = '#';
        sec[len2] = '#';
        plus = 10;
        result1= result(fir,plus);
        result2= result(sec,plus);
        if( result1 != result2 )
            printf("NO/n");   
        else
            printf("YES/n");
    }
system("pause");
return 0;
}

