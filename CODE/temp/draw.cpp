#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    int i,j;

    int t;
    cin>>t;

    int n;
    int flag;
    while(t--)
    {
        flag = 1;
        cin>>n;

        bool *arr_draw = new bool[(n + 2) * (n + 2)];
        bool *arr_draw_save = new bool[(n + 2) * (n + 2)];
        bool *arr_res = new bool[(n + 2) * (n + 2)];

        string str;
        memset(arr_draw,0,sizeof(bool) * (n + 2) * (n + 2));
        for(i = 1; i <= n; ++i)
        {
            cin>>str;
            for(j = 1; j <= n; ++j)
            {
                if(str[j-1] == 'y') arr_draw[i * (n + 2) + j] = false;
                else arr_draw[i * (n + 2) + j] = true;
            }
        }
        memcpy(arr_draw_save,arr_draw,sizeof(bool) * (n + 2) * (n + 2));

        memset(arr_res + 1 * (n + 2),0,sizeof(bool) * (n + 2));
        while(1)
        {
            for(i = 1; i <= n; ++i)
            {
                for(j = 1; j <= n; ++j)
                {
                    arr_draw[(i - 1) * (n + 2) + j] ^= arr_res[i * (n + 2) + j];
                    arr_draw[i * (n + 2) + (j - 1)] ^= arr_res[i * (n + 2) + j];
                    arr_draw[i * (n + 2) + (j + 1)] ^= arr_res[i * (n + 2) + j];
                    arr_draw[(i + 1) * (n + 2) + j] ^= arr_res[i * (n + 2) + j];
                    arr_draw[i * (n + 2) + j] ^= arr_res[i * (n + 2) + j];
                }
                memcpy(&arr_res[(i + 1) * (n + 2)],&arr_draw[i * (n + 2)],sizeof(bool) * (n + 2));
            }
            for(i = 1; i <= n; ++i) if(arr_draw[n * (n + 2) + i]) break;
            if(i > n) break;
            else
            {
                memcpy(arr_draw,arr_draw_save,sizeof(bool) * (n + 2) * (n + 2));

                for(i = n; i > 0; --i) if(!arr_res[1 *(n + 2) + i]) break;
                while(i <= n) {arr_res[1 * (n + 2) + i] = !arr_res[1 * (n + 2) + i]; ++i;}

                for(i = 1; i <= n; ++i) {if(arr_res[1 * (n + 2) + i]) break;}
                if(i > n) {flag = 0; break;}
            }
        }

        int count = 0;
        if(flag)
        {
            for(i = 1; i <= n; ++i)
            {
                for(j = 1; j <= n; ++j)
                {
                    count += arr_res[i * (n + 2) + j];
                }
            }
            cout<<count<<endl;
        }
        else cout<<"inf"<<endl;

        delete [] arr_draw;
        delete [] arr_draw_save;
        delete [] arr_res;

    }
    return 0;
}
