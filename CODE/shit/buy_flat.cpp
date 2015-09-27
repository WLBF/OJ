#include <iostream>

using namespace std;

int main(){
    int n, k, year = 30, d = 0, p = 200;
    while(cin >> n >> k){


        if (n >= 10 && n <= 50 && k >= 1 && k <= 20){
            year = 30;
            d = 0;
            p = 200;
            for (int i = 1; i <= 20; i++){
                d += n;
                //cout << d << "  "<<p<<endl;
                if (d >= p){
                    year = i;
                    break;
                }
                p += p*k/100;
            }
            if (year <= 20){
                cout<< year <<endl;
            }
            else{
                cout<< "Impossible" << endl;
            }
        }

    }
}
