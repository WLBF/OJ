#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;



int inde = 0;

char buffer[100][30] ={0};


void explorer(int level){
    string temp[30];
    int idx = 0;
    while(true){

        if(buffer[inde][0] == 'f'){
            temp[idx] = buffer[inde];

            idx++;
            inde++;
        }
        else if(buffer[inde][0] == 'd'){
            for (int i = 0; i< level+1; i++){
                cout << "|     ";
            }
            cout <<buffer[inde] << endl;
            inde++;
            explorer(level+1);

        }
        else if(buffer[inde][0] == ']' || buffer[inde][0] == '*'){
            sort(temp, temp+idx);
            for(int i = 0; i < idx; i++){
                for (int i = 0; i< level; i++){
                cout << "|     ";
                }
                cout << temp[i] << endl;
            }
            inde++;
            break;
        }


   }

}


int main(){
    int counter = 1;

    for(int i = 0; cin.getline(buffer[i], 30); i++){
        if(buffer[i][0] == '#') break;
    }
    inde = 0;
    while(buffer[inde][0] != '#'){
        printf("DATA SET %d:\nROOT\n", counter);
        explorer(0);
        counter++;
        cout << endl;
    }
}
