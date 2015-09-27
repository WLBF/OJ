#include <iostream>
#include <cmath>
using namespace std;



int main(){
    int lst[6];
    int maxodd = 0x80000000, mineven = 0x7fffffff;
    int flag = 1;
    for (int i = 0; i < 6; i++){
        cin >> lst[i];
        if (lst[i] < 1 || lst[i] >= 100){
            flag &= 0;
        }
    }
    if (flag){
        for (int i = 0; i < 6; i++){
            if (lst[i]/2*2 == lst[i]){
                if (lst[i] < mineven){
                    mineven = lst[i];
                }
            }
            else{
                if (lst[i] > maxodd){
                    maxodd = lst[i];
                }
            }
        }
        cout << abs(maxodd - mineven);
    }

}
