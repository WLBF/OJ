#include<iostream>
#include<cstdlib>
#include<cstdio>
using namespace std;

int cmp(const void * a,const void * b)
{
	return *(int *)a - *(int *)b;
}

int num[200010];

int main()
{
	int m,k;
	scanf("%d%d",&m,&k);
	for(int i=0;i<k;i++)
		scanf("%d",&num[i]);
	m -= k;
	qsort(num,k,sizeof(num[0]),cmp);
	while(m>0)
	{
		if(m>=k)
		{
			for(int i=k;i<2*k;i++)
				scanf("%d",&num[i]);
			m -= k;
			qsort(num,2*k,sizeof(num[0]),cmp);
		}
		else
		{
			for(int i=k;i<k+m;i++)
				scanf("%d",&num[i]);
			qsort(num,k+m,sizeof(num[0]),cmp);
			m = 0;
		}
	}
	printf("%d\n",num[k-1]);
	return 0;
}
