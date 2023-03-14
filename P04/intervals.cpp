#include <iostream>
#include "interval.h"
#include <cmath>
using namespace std;

bool is_in(const time_of_day search,const interval interval){

    
    if (search.h > interval.start.h && search.h < interval.end.h){return true;}
    if (search.h > interval.start.h && search.h == interval.end.h){
        if (search.m < interval.end.m){return true;}
        else{return false;}
    }

    if (search.h == interval.start.h && search.h < interval.end.h){
        if (search.m >= interval.start.m){return true;}
        else{return false;}
    }

    if (search.h == interval.start.h && search.h == interval.end.h){
        if (search.m >= interval.start.m && search.m < interval.end.h){return true;}
        else{return false;}
    }

    return false;
}

int time_difference(const interval interval){

    int start_minutes = interval.start.h * 60 + interval.start.m;
    int end_minutes = interval.end.h * 60 + interval.end.m;

    return max(start_minutes,end_minutes) - min(start_minutes,end_minutes);
}


time_of_day max_tod(const time_of_day a, const time_of_day b){

    if (a.h > b.h){return a;}
    if (a.h < b.h){return b;}
    if (a.h == b.h){
        if (a.m > b.m){return a;}
        if (a.m < b.m){return b;}
        if (a.m == b.m){return a;}
    }

    return {0,0};
}

time_of_day min_tod(const time_of_day a, const time_of_day b){

    if (a.h < b.h){return a;}
    if (a.h > b.h){return b;}
    if (a.h == b.h){
        if (a.m < b.m){return a;}
        if (a.m > b.m){return b;}
        if (a.m == b.m){return a;}
    }

    return {0,0};
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u){


    interval save = {0,0};
    int counter=0;
    bool flag = true;

    for (int i = 0; i<n; i++){

        if (is_in(t,a[i])){
            flag = false;
            if (counter==0){
                u.start = a[i].start;
                u.end = a[i].end;
                save = u;
                counter++;
            }
            else{
                u.start = min_tod(a[i].start,save.start);
                u.end = max_tod(a[i].end,save.end);
                save = u;
            }
        }

    }

    if (flag){
        u.start = t;
        u.end = t;
    }

    return time_difference(u);



}


int main(){

  { const int n = 1;
  const time_of_day t = { 13, 00 };
  const interval a[n] { { { 12, 30 }, { 14, 30 } } };
  interval u;
  int d = search_intervals(t, a, n, u);
  cout << d << ' ' << u << '\n'; }


  { const int n = 2;
  const time_of_day t = { 15, 30 };
  const interval a[n] { { { 12, 30 }, { 14, 30 } }, 
                  { { 14, 30 }, { 15, 30 } } };
  interval u;
  int d = search_intervals(t, a, n, u);
  cout << d << ' ' << u << '\n'; } 

  return 0;
}