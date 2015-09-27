#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;

stack<int > s;
int r = 0;
int pushtimes = 0;
int poptimes = 0;

void func(int n){
    if(pushtimes == n && poptimes == n){
        r++;
        return;
    }
    else if(pushtimes < n && pushtimes == poptimes ){
        pushtimes++;
        func(n);
        pushtimes--;
    }
    else if(poptimes < pushtimes && pushtimes == n){
        poptimes++;
        func(n);
        poptimes--;
    }
    else{
        pushtimes++;
        func(n);
        pushtimes--;

        poptimes++;
        func(n);
        poptimes--;
    }

}


int main(){
    int n;
    cin >> n;
    func(n);
    cout << r << endl;

}
