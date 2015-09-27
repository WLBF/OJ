#include <iostream>
#include <cstring>
#include <ctype.h>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int angle;


int main() {
    //int counter = 0;
    //for (; scanf("%d", angle + counter); counter++);
    for (;scanf("%d", &angle);) {
        for ( int H = 0; H < 12; H++) {
            for (int M = 0; M < 60; M++) {
                for (int S = 0; S < 60; S += 10 ){
                    int temp;
                    temp = abs(360000*H - 66000*M - 1100*S);
                    if (temp == angle) {
                        printf("%.2d:%.2d:%.2d\n", H, M, S);
                    }
                }
            }
        }
    }
    return 0;
}
