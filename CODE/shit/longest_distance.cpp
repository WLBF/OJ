#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define MAXM 10000
double distance(double x[MAXM], double y[MAXM], int i, int j){
    return sqrt(pow(x[i] - x[j],2) + pow(y[i] - y[j],2));
}

int main(){
    int n;
    double x[MAXM], y[MAXM];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }
    double dis = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (distance(x, y, i, j) > dis){
                dis = distance(x, y, i, j);
            }
        }
    }
    cout << fixed << setprecision(4) << dis << endl;
}
