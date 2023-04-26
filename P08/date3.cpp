#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "Date3.h"
using namespace std;

int Date::num_days(int year, int month) {
  int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}


Date::Date(){
    yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day){
    int rday,rmonth,ryear;
    if (day<1 || day>num_days(year,month)){rday=0;rmonth=0;ryear=0;}
    else{rday = day;}
    if ((rday==0) || (month<1 || month>12)){rday=0;rmonth=0;ryear=0;}
    else{rmonth = month;}
    if ((rmonth==0)|| (year<1 || year>9999)){rday=0;rmonth=0;ryear=0;}
    else{ryear = year;}
    string sday,smonth,syear;
    sday = to_string(rday);
    smonth = to_string(rmonth);
    syear = to_string(ryear);
}

int main(){

Date d2(2022, 4, 31); d2.write();

  return 0;
}