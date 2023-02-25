#include <iostream>
using namespace std;

bool is_leap_year(int n){
    if (n%4==0 && (!((n%100==0) && !(n%400==0)))){return true;}
    else {return false;}
}
 
enum {january = 1,february,march,april,may,june,july,august,september,october,november,december};
int days_in_month(int month,int year){
    int r;
    switch(month){
        case february:
            if (is_leap_year(year)){
                r = 29;
                }
            else{
                r = 28;
            }
            break;

        case january: case march: case may: case july: case august: case october: case december:
            r = 31;
            break;
        default:
            r = 30;
            break;
    }
    return r;
}


void advance(int delta, int& d, int& m, int& y){
    do{
        d = d + 1;
        delta = delta - 1;

        if(m>12){
            m = m - 12;
            y = y + 1;
        }

        if(d>days_in_month(m,y)){
            d = d - days_in_month(m,y);
            m = m + 1;
        }

    } while(delta>0);

}

int main(){
    int d = 2, m = 12, y = 1900; 
    advance(365 + 5, d, m, y); 
    cout << d << ' ' << m << ' ' << y << '\n';
    return 0;;
}
