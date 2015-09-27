#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
   int n, val, c[4] = {0};
   cin >> n;
   if (n > 0 && n <= 100){
        for (int i = 0; i < n; i++){
            cin >> val;
            if(val >= 1 && val <= 18){c[0]++;}
            if(val >= 19 && val <= 35){c[1]++;}
            if(val >= 36 && val <= 60){c[2]++;}
            if(val > 60){c[3]++;}

        }
        printf("1-18: ");
        printf("%.2f", c[0]*100.0/n);
        printf("%%\n");
        printf("19-35: ");
        printf("%.2f", c[1]*100.0/n);
        printf("%%\n");
        printf("36-60: ");
        printf("%.2f", c[2]*100.0/n);
        printf("%%\n");
        printf("60-: ");
        printf("%.2f", c[3]*100.0/n);
        printf("%%");
   }
}
