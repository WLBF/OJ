#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

#define MAXM 10000

using namespace std;

int n, h;
int f[MAXM];
int d[MAXM];
int t[MAXM];
int ans[MAXM];
int maxFish;
int nlake;


void greed(int nn, int ch)
{
    int fishs = 0;
    int rh = h - ch;
    int* tmpF = new int[nn];
    int* tmpAns = new int[nn];

    if(rh < 0)
        return;

    //cout << rh << endl;

    for(int i=0; i < nn; i++){
        tmpF[i] = f[i];
        tmpAns[i] = 0;
    }

    while(rh >= 5){
        int maxn = 0;
        int idx;
        for(int i=0; i< nn; i++){
            if(maxn < tmpF[i]){
                maxn = tmpF[i];
                idx = i;
            }
        }

        if(maxn <= 0)
            idx = 0;
        else{
            fishs += tmpF[idx];
            tmpF[idx] -= d[idx];
        }

        tmpAns[idx] += 5;
        rh -= 5;
    }

    if(fishs > maxFish){
        nlake = nn;
        maxFish = fishs;
        for(int i=0; i<nn; i++)
            ans[i] = tmpAns[i];
    }
	
	delete[] tmpAns;
	delete[] tmpF;
	
    return;
}



int main(){
    for(;;){
        memset(ans, 0, sizeof(ans));
        maxFish = 0;

        cin >> n;
        if(n == 0)
            break;

        cin >> h;
        h *= 60;

        for(int i=0; i<n; i++)
            cin >> f[i];
        for(int i=0; i<n; i++)
            cin >> d[i];
        for(int i=0; i<n-1; i++)
            cin >> t[i];

        int ch;
        for(int i=1; i<=n; i++){
            int nn = i;
            if(i==1) ch = 0;
            else ch += t[i-2]*5;

            greed(nn, ch);
        }


        for(int i=0; i<n-1; i++)
            cout << ans[i] << ", ";
        cout << ans[n-1] << endl;

        printf("Number of fish expected: %d\n\n", maxFish);
        //cout << nlake << endl;
    }

}
