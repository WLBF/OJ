#include <iostream>

using namespace std;

int main(){
    int a, b;
    char op;
    cin >> a >> b;
    cin >> op;
    switch(op){
        case '+':{
            cout << a+b << endl;
            break;
        }
        case '-':{
            cout << a-b << endl;
            break;
        }
        case '*':{
            cout << a*b << endl;
            break;
        }
        case '/':{
            if (b == 0){
                cout << "Divided by zero!" << endl;
                break;
            }
            else {
                cout << a/b << endl;
                break;
            }
        }
        default:{cout << "Invalid operator!" << endl;}

    }
}
