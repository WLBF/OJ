#include<algorithm>
#include<cassert>
#include<cstdio>
#include<cmath>
#include<cstring>
#include <iostream>
using namespace std;

int get_sg(int n)
{
    if(n == 0)
        return 0;
    
    int remain = n % 4;
    if(remain == 0)
        return n - 1;
    else if(remain == 3)
        return n + 1;
    else 
        return n;
}

int main()
{ 
    {
        int n, yihuo = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
        {
            int pile, tmp;
            scanf("%d", &pile);
            tmp = get_sg(pile);
            yihuo ^= tmp;
        }
        if(!yihuo)
            printf("Bob\n");
        else
            printf("Alice\n");
    }

    return 0;
}
