#include <iostream>
#include <cstdio>

using namespace std;

int days_nums[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};



bool is_leap_year(int y){
    if ((y%100!=0)&&(y%4==0)||(y%400==0)){
        return true;
    }else{
        return false;
    }
}

int get_year(int y, int m, int d){
    if (m==12 && d==31){
        return y+1;
    }else{
        return y;
    }
}

int get_month(int y, int m, int d){
    if (y!=get_year(y,m,d)){
        return 1;
    }else{
        if (d+1 > days_nums[m - 1] && !(is_leap_year(y) && m==2)){
            return m+1;
        }
        else if(is_leap_year(y) && m==2 && d+1 > 29){
            return m+1;
        }
        else{
            return m;
        }
    }

}

int get_day(int y, int m, int d){
     if (m != get_month(y, m, d)){
        return 1;
     }
     else {
        return d+1;
     }
}

int main(){
    int year, month, day;
    scanf("%d-%d-%d",&year,&month,&day);
    //cout << year << endl << month << endl << day << endl;


    int y =  get_year(year, month, day);
    int m = get_month(year, month, day);
    int d = get_day(year, month, day);
    printf("%d-%02d-%02d\n",y,m,d);
}
