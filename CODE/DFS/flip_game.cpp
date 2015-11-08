#include<iostream>
#include<algorithm>

using namespace std;

int board[4][4];
int c=33;



void turn(int i,int j)
{
     if(i>=0&&i<4&&j>=0&&j<4)
     board[i][j]=!board[i][j];
}
void flip(int s)
{
    int i=s/4;
    int j=s%4;
    turn(i,j);
    turn(i+1,j);
    turn(i,j+1);
    turn(i-1,j);
    turn(i,j-1);
}

bool check()
{
    int sum = 0;
    for(int i=0;i<4;i++)
       for(int j=0;j<4;j++)
          sum +=board[i][j];

    return sum == 16 || sum == 0;
}


void dfs(int s,int b)
{
     if(check())
     {
        c = min(c, b);
        return;
     }
     if(s>=16)
        return;

    dfs(s+1,b);
    flip(s);
    dfs(s+1,b+1);
    flip(s);
}
int main()
{
    char tmp;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin >> tmp;
            if(tmp == 'w')
                board[i][j] = 1;
            else
                board[i][j] = 0;
        }
    }



    dfs(0,0);
    if(c==33)
      cout << "Impossible" << endl;
    else
      cout << c << endl;

}
