#include <iostream>
#include <cstdio>

using namespace std;

void collatz(int val){
    if (val/2*2==val && val>1){
        printf("%d/2=%d\n", val, val/2);
        collatz(val/2);
    }
    else if(val/2*2!=val && val>1){
        printf("%d*3+1=%d\n", val, val*3+1);
        collatz(val*3+1);
    }else{
        printf("End\n");
    }
}

int main(){
    int n;
    cin >> n;
    collatz(n);
}
