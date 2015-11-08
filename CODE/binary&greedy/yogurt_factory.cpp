#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, s;
    long long int total = 0;

    cin >> n >> s;

    int c, lc = 10000, y;
    for(int i=0; i<n; i++){
        cin >> c >> y;
        lc = min(c, lc+s);
        total += lc*y;
    }

    cout << total << endl;
}
