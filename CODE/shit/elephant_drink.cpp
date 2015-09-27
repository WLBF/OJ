#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
int main(){
    int h, r;
    double v;
    cin >> h >> r;
    v = PI * r * r * h;
    cout << ceil(20000/v);
}
