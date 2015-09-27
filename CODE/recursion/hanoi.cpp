#include<iostream>
#include<stack>

using namespace std;

void Hanoi_recur(int n, char src, char mid, char dest)
{
        if(n == 1){
            cout << src << "->" << dest <<endl;
            return;
        }
        Hanoi(n-1, src, dest, mid);
        cout << src << "->" << dest << endl;
        Hanoi(n-1, mid, src, dest);
    return;
}


struct Problem{
    int n;
    char src, mid, dest;
    Problem(int nn, char s, char m, char d):n(nn), src(s), mid(m), dest(d){}
};

stack<Problem>stk;

void Hanoi_nonrecur(int n){
    stk.push(Problem(n, 'A', 'B', 'C'));
    while(!stk.empty()){
        Problem curPrb = stk.top();
        stk.pop();
        if(curPrb.n==1){
            cout << curPrb.src << "->" << curPrb.dest <<endl;
        }
        else{
            stk.push(Problem(curPrb.n-1, curPrb.mid, curPrb.src, curPrb.dest));
            stk.push(Problem(1, curPrb.src, curPrb.mid, curPrb.dest));
            stk.push(Problem(curPrb.n-1, curPrb.src, curPrb.dest, curPrb.mid));
        }
    }
}

