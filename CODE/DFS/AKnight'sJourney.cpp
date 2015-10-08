#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int board[26][26], n, p, q, moves[26][2], k;


bool legal(int i, int j){
    if(i >= 0 && i < p
       && j >=0 && j < q
       && board[i][j]!=1) return true;
    else return false;
}

bool dfs(int i, int j){
    if(!legal(i, j)) return false;
    //cout << "dfs:" << i << "," << j << endl;
    board[i][j] = 1;
    k++;
    if(dfs(i-1, j-2)||dfs(i+1, j-2)
       ||dfs(i-2, j-1)||dfs(i+2, j-1)
       ||dfs(i-2, j+1)||dfs(i+2, j+1)
       ||dfs(i-1, j+2)||dfs(i+1, j+2)
       ||k==p*q){

        moves[k][0] = i;
        moves[k][1] = j;
        board[i][j] = 0;
        k--;
        return true;

    }
    board[i][j] = 0;
    k--;
    return false;

}


int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p >> q;
        memset(board, 0, sizeof(board));

        bool flag = false;
        for(int i=0; i < (p+1)/2; i++){
            for(int j=0; j < (q+1)/2; j++){
                //cout << "loop:" << i << "," << j << endl;
                k = 0;
                if(dfs(i,j)==true){
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }

        printf("Scenario #%d:\n", i+1);
        if(flag){
            for(int i=1; i <= p*q; i++){
                cout << (char)(moves[i][1]+65) << moves[i][0]+1;
            }
            cout << endl;
        }
        else cout << "impossible" << endl;

        cout << endl;
    }
}
