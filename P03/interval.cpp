#include <iostream>
#include "interval.h"
using namespace std;


bool bigger(time_of_day a,time_of_day b){
    if (a.h > b.h){
        return true;
    }else if ((a.h == b.h) && (a.m > b.m)){
        return true;
    }else{return false;}

}

bool equal(time_of_day a,time_of_day b){
    if ((a.h==b.h)&&(a.m==b.m)){
        return true;
    }else{return false;}
}

interval intersection(interval a, interval b){
    interval result {0,0};
    if (!((bigger(b.end,a.start) && bigger(b.start,a.end)) || (bigger(a.end,b.start) && bigger(a.start,b.end)))) {
        if (bigger(a.start,b.start)){
            result.start = a.start;
        }else{
            result.start = b.start;
        }
        if (bigger(a.end,b.end)){
            result.end = b.end;
        }else{
            result.end = a.end;
        }
    }


    if (equal(result.start,result.end)){
        result.start = {0,0};
        result.end = {0,0};
    }

    return result;
}

int main(){
	return 0;
}