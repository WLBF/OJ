#include <iostream>

using namespace std;

int main(){
    int n, l;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> l;
        double a = l/3.0 + 50;
        double b = l/1.2;
        if (a > b){
            cout << "Walk" << endl;
        }
        else if(a < b){
            cout << "Bike" << endl;
        }
        else{
            cout << "All" << endl;
        }
    }
}
