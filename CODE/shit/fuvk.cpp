#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(){
    char s[505];
    gets(s);
    int point = 0, current_count = 0, max_count = 0;
    for (int i = 0; i < 500; i++) {
        if (s[i] != ' ' && s[i] != '.') {
            current_count++;
        }
        else {
            if (current_count > max_count) {
                point = i - current_count;
                max_count = current_count;
            }
        if (s[i] == '.')
            break;
        current_count = 0;
    }

    }
    for (int i = 0; i < max_count; i++){
        cout << s[point+i];
    }
}
