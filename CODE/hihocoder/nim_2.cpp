#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string input;
    cin>>n>>input;
    int shit[10000] = {0};
    for (int i = 0; i < n; i++)
        shit[i] = ((input[i] == 'H')?(i + 1) :0);
    int result = 0;
    for (int j = 0; j < n; j++)
        {
        result ^= shit[j];
        }
    if (result)
        cout<<"Alice\n"<<endl;
    else
        cout<<"Bob\n"<<endl;
}
