#include <iostream>


using namespace std;

int odd(int mat[100][100], int i, int j){
    if ((mat[i-1][j]-mat[i][j])>=50&&(mat[i][j-1]-mat[i][j])>=50&&(mat[i][j+1]-mat[i][j])>=50&&(mat[i+1][j]-mat[i][j])>=50){
       return 1;
    }
    else {
        return 0;
    }
}


int main(){
    int n, mat[100][100];
    cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int c = 0;
    for (int i = 1; i < n-1; i++){
        for (int j = 1; j < n-1; j++){
            c += odd(mat, i, j);
        }
    }
    cout << c <<endl;

}
