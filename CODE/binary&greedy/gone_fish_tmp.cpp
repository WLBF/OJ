#include <algorithm>
#include <queue>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

const int maxn = 30;

int t[maxn], f[maxn], d[maxn];

struct node{
    int id;
    int f;
    int d;
    friend bool operator <(node a, node b){   //ע��Ӵ�С�ţ�Ҫ���� '<'
        if(a.f == b.f) return a.id > b.id;   //��������ȣ���ѡ��id��С��
        return a.f < b.f;
    }
};

node fish[maxn];

int times[maxn][maxn];     //��¼ÿ��������ʱ��

int main(){
    #ifdef sxk
        freopen("in.txt", "r", stdin);
    #endif // sxk

    int n, h;
    while(scanf("%d", &n)!=EOF && n){
        scanf("%d", &h);
        memset(times, 0, sizeof(times));
        h = h * 12;
        for(int i=1; i<=n; i++){ scanf("%d", &fish[i].f); fish[i].id = i; }
        for(int i=1; i<=n; i++) scanf("%d", &fish[i].d);
        for(int i=1; i<=n-1; i++) scanf("%d", &t[i]);

        int maxans = 0;
        int maxk = 1;
        for(int i=1; i<=n; i++){
            int tc = 0;
            for(int j=1; j<i; j++) tc += t[j];
            priority_queue<node> p;
            for(int j=1; j<=i; j++) p.push(fish[j]); //����1~X����������Ӵ�С�ŵ����ȶ���
            int ans = 0;
            int t = h - tc;
            for(int j=1; j<=t; j++){
                node foo = p.top();
                ans += foo.f;
                times[i][foo.id] += 5;
                p.pop();
                p.push(node{foo.id, max(foo.f - foo.d, 0), foo.d});
            }
            if(maxans < ans){
                maxans = ans;
                maxk = i;
            }
        }
        for(int i=1; i<n; i++) printf("%d, ", times[maxk][i]);
        printf("%d\n", times[maxk][n]);
        printf("Number of fish expected: %d\n\n", maxans);
    }
    return 0;
}
