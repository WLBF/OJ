#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int n, k, maxVal, record, deep, maxdeep, ans[6];

inline int digitSum(int n){
    int sum = 0;
    for(int i = 0; i < 6; i++){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

bool dfs(int n, int v){

    if( n+v <= k && n+v >= maxVal){
        if( n+v == maxVal)
            record++;
        else{
            maxVal = n+v;
            record = 1;
        }
        maxdeep = deep;
        ans[deep] = n;
        return true;
    }

    if( n/10 == 0 )
        return false;

    if( v > k || digitSum(n)+v > k)
        return false;

    int c = 1;
    bool flag = false;
    for(int i = 0; i < 5; i++){
        c *= 10;
        if( n%c != n){
            deep++;
            bool val = dfs( n/c, v+n%c);
            flag |= val;
            if(val)
                ans[deep-1] = n%c;
            deep--;
        }
    }
    return flag;
}


int main(){
    //cout << digitSum(123456) << endl;
    for(;;){
        cin >> k >> n;
        if(k==0 && n==0)
            break;

        memset(ans, 0, sizeof(ans));
        maxdeep = 0;
        deep = 0;
        maxVal = 0x80000000;
        record = 0;
        dfs(n, 0);
        if(record == 0)
            cout << "error" << endl;
        else if(record == 1){
            cout << maxVal;
            for(int i = maxdeep; i >= 0; i--)
                cout << " " << ans[i];
            cout << endl;
        }
        else
            cout << "rejected" << endl;

    }
}
