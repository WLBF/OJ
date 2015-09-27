#include <iostream>

using namespace std;

int test(int a[], int b, int d, int t, int h){
    int tmp[] = {b,d,t,h};
    int val = 0;
    for (int i = 0; i <4; i++){
        if (tmp[i] == a[i]){
            val++;
        }
    }
    return val;
}

int main(){
    int A[4] = {3,1,2,4};
    int B[4] = {2,4,3,1};
    int C[4] = {0,3,0,4};
    int D[4] = {1,3,4,2};
    for (int b = 1; b <=4; b++){
        for (int d = 1; d <=4; d++){
                for (int t = 1; t <=4; t++){
                        for (int h = 1; h <=4; h++){
                            if(b!=d && b!=t && b!=h && d!=t && d!=h && t!=h){
                                if (test(A, b, d, t, h)==1
                                    &&test(B, b, d, t, h)==1
                                    &&test(C, b, d, t, h)==1
                                    &&test(D, b, d, t, h)==1){
                                        cout << b << endl << d << endl << t << endl << h<< endl;
                                        return 0;
                                    }
                            }

                        }

                }
        }
    }
}
