#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#include <cstring>
#include <cmath>
#include <climits>
#define eps 1e-8
using namespace std;
typedef long long ll;
const int INF=INT_MAX;
const int maxn = 110;
int k,ans[20],Joseph[20];
void init()
{
    for(int k=1;k<=14;k++){
        int m=1,n=2*k;
        while(1){
          bool ok=true;
          ans[0]=0;
          for(int i=1;i<=k;i++){
            ans[i]=(ans[i-1]+m-1)%(n+1-i);//递推
            if(ans[i]<k) {ok=false;break;}//不满足条件就标记
          }
          if(ok) break;
          m++;
        }
        Joseph[k]=m;
    }
}
int main()
{
  // freopen("input.txt","r",stdin);
   init();
   while(cin>>k&&k){
     cout<<Joseph[k]<<endl;
   }
   return 0;
}
