#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int dp[12890];
struct A
{
    int w,d;
}a[3410];
int main()
{
    int i,j,n,m,ans=0;
	memset(dp,0,sizeof(dp));
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i].w,&a[i].d);
	for(i=0;i<n;i++)
		for(j=m;j>=a[i].w;j--)
			if(dp[j]<dp[j-a[i].w]+a[i].d)
				dp[j]=dp[j-a[i].w]+a[i].d;
	printf("%d\n",dp[m]);
    return 0;
}
