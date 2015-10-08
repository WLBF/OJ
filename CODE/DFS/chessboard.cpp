#include<iostream>
#include<cstdio>


using namespace std;

int n,k, ans = 0;
char board[8][8];


int fit(int i, int j){
    int flag = 1;
    for (int c=0; c < n; c++){
        if (board[i][c] == '@' || board[c][j] == '@'){
            flag = 0;
            break;
        }
    }
    return flag;
}

void dfs(int i, int k){
    if(i==n&&k==0){
        ans++;
        return;
    }

    for(int j = 0; j < n; j++){
        if(board[i][j] == '#' && fit(i,j)){
            board[i][j] = '@';
            dfs(i+1, k-1);
            board[i][j] = '#';
        }
    }

    if(n-i-1 >= k) dfs(i+1, k);

}


int main(){
    for(;;){
        cin >> n >> k;
        if(n==-1 && k==-1) break;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> board[i][j];
            }
        }
        ans = 0;
        dfs(0, k);
        cout << ans << endl;
    }



}
