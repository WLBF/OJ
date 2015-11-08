#include<iostream>
#include<cstdio>
#include<algorithm>

#define MAXM 100000

using namespace std;

typedef long long int LL;
LL stalls[MAXM];
int n, c;

/*
void swap(LL* a, LL* b) {
    LL t = *a; *a = *b; *b = t;

}


void quicksort(LL* c, int l, int r)
{
    if(l >=r )
        return;

    int piv = c[l];
    int i,j;
    for(i=l+1, j=l+1; i<=r; i++){
        if(c[i] < piv){
            swap(c+i, c+j);
            j++;
        }
    }
    swap(c+l, c+j-1);

    quicksort(c, l, j-2);
    quicksort(c, j, r);
}
*/

bool check(LL ans)
{
    if(n == 1)
        return c <= 1;

    LL s = 1;
    LL now = 0;
    for(int i=1; i<n; i++){
        if(now < ans)
            now += stalls[i] - stalls[i-1];
        else{
            now = stalls[i] - stalls[i-1];
            s++;
        }
        //cout << i << "---"<< s << "---" << now <<  endl;
    }
    if(now >= ans)
        s++;

    //cout << s << endl;
    return s >= c;
}



int main()
{
    scanf("%d%d", &n, &c);

    for(int i=0; i<n; i++)
        scanf("%lld", stalls+i);

    sort(stalls, stalls+n);

    /*
    for(int i=0; i<n; i++)
        cout << stalls[i] << ",";
    cout << endl;
    */

    //cout << check(3) << endl;

    LL l = stalls[1] - stalls[0], r = 0, mid;

    for(int i=1; i < n; i++){
        if(stalls[i]- stalls[i-1] < l)
            l = stalls[i] - stalls[i-1];
        r += stalls[i] - stalls[i-1];
    }

    while( l <= r){
        mid = (l+r)/2;
        if(check(mid)) l = mid+1;
        else r = mid - 1;
    }

    //cout << check(3) << endl;
    //cout << check(4) << endl;
    //cout << check(6) << endl;
    cout << r << endl;

}
