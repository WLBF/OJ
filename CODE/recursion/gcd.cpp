#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    for(int temp; b; a=b, b=temp)
        temp = a%b;
    return a;
}


int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        cout << gcd(a, b) << endl;
    }
}
