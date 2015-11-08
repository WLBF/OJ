#include<iostream>
#include<cstdio>



using namespace std;

int maze[5][5];
int dir[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
int ans[50][2];
int minm = 30;



bool valid(int x, int y)
{
    return x>=0&&x<5&&y>=0&&y<5&&maze[x][y]!=1;
}



bool dfs(int x, int y, int n)
{
    if(!valid(x, y))
        return false;

    if(x==4 && y==4){
        if(n < minm){
            minm = n;
            ans[n][0] = x;
            ans[n][1] = y;
            return true;
        }
        else
            return false;
    }

    int flag = false;
    for(int i=0; i < 4; i++){
        maze[x][y] = 1;
        flag |= dfs(x+dir[i][0], y+dir[i][1], n+1);
        maze[x][y] = 0;
    }

    if(flag){
        ans[n][0] = x;
        ans[n][1] = y;
    }
}


int main()
{
    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++)
            cin >> maze[i][j];

    dfs(0, 0, 0);
    for(int i=0; i<=minm; i++)
        cout << "("<< ans[i][0] << ", " << ans[i][1] << ")" << endl;
}
