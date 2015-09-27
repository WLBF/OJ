#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

char maze[100][100];
int visited[100][100];
int n,m;

bool legal(int x, int y){
    if(x>=0 && x<n && y>=0 && y<m && maze[x][y]!='#'){
        return true;
    }
    else{
        return false;
    }
}

int f(int x, int y){

    if(maze[x][y]=='T'){
        return 0;
    }
    else if(visited[x][y]!=-1){
        //cout << visited[x][y] << endl;
        return visited[x][y];

    }
    else{
        maze[x][y]='#';
        int minm = 0x7fffffff;
        if (legal(x+1,y)){
            minm = min(minm, f(x+1,y));
        }
        if (legal(x-1,y)){
            minm = min(minm, f(x-1,y));
        }
        if (legal(x,y+1)){
            minm = min(minm, f(x,y+1));
        }
        if (legal(x,y-1)){
            minm = min(minm, f(x,y-1));
        }

        visited[x][y] = minm+1;
        return minm+1;
    }

}

int main(){
    for (int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            visited[i][j] = -1;
        }
    }
    int sx, sy;
    cin >> n >> m;
    for (int i =0; i < n; i++){
        for(int j=0; j < m; j++){
            cin >> maze[i][j];
            if(maze[i][j]=='S'){
                sx = i;
                sy = j;
            }
        }
    }
    cout << f(sx, sy) << endl;


}
