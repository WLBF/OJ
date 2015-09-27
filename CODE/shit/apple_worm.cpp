#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,x,y;
    cin >> n >> x >> y;
    if(n- ceil(y*1.0/x) > 0){
        cout << n- ceil(y*1.0/x);
    }
    else {
        cout << 0;
    }
}
