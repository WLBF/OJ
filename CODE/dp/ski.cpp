#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int m[100][100], L[100][100];

struct point{
    int h;
    int i;
    int j;
} p[10000];

bool operator<(const point & a, const point & b){
    return a.h < b.h;
}


int main(){
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++){
            L[i][j] = 1;
        }
    }

    int r, c;
    cin >> r >> c;
    for (int i = 0; i <r; i++){
        for(int j = 0; j < c; j++){
            cin >> m[i][j];
            p[i*c + j].h = m[i][j];
            p[i*c + j].i = i;
            p[i*c + j].j = j;
        }
    }

    sort(p, p + r*c);

    for(int i = 0; i < r*c ; i++){
        //cout << p[i].h << endl;
        int i_ = p[i].i, j_ = p[i].j;
        //if(p[i].h == 10) cout << i_ << "  "<< j_ << "   "<< i<<endl;
        if(i_ > 0 && m[i_][j_] > m[i_-1][j_])

            L[i_][j_] = max(L[i_][j_], L[i_-1][j_]+1);

        if(i_ < r-1 && m[i_][j_] > m[i_+1][j_])

            L[i_][j_] = max(L[i_][j_], L[i_+1][j_]+1);

        if(j_ > 0 && m[i_][j_] > m[i_][j_-1])

            L[i_][j_] = max(L[i_][j_], L[i_][j_-1]+1);

        if(j_ < c-1 && m[i_][j_] > m[i_][j_+1])

            L[i_][j_] = max(L[i_][j_], L[i_][j_+1]+1);
    }

     int maxm = 0x80000000;
     for (int i = 0; i <r; i++){
        for(int j = 0; j < c; j++){
            //cout << L[i][j] << "  ";
            if(L[i][j] > maxm) maxm = L[i][j];
        }
        //cout << endl;
     }
     cout << maxm << endl;

}
