#include <iostream>
#include <string>
#include <sstream>
#include "Date2.h"
using namespace std;


int Date::num_days(int year, int month) {
  int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}


Date::Date(){
    day = 1;
    month = 1;
    year = 1;
}

Date::Date(int year, int month, int day){
    if (day<1 || day>num_days(year,month)){this->day=0;this->month=0;this->year=0;}
    else{this->day = day;}
    if ((this->day==0) || (month<1 || month>12)){this->day=0;this->month=0;this->year=0;}
    else{this->month = month;}
    if ((this->month==0)|| (year<1 || year>9999)){this->day=0;this->month=0;this->year=0;}
    else{this->year = year;}
}

Date::Date(const string& year_month_day){
    int d,m,y;
    char sep1,sep2;

    istringstream iss(year_month_day);
    iss >> y >> sep1 >> m >> sep2 >> d;
    if (d<1 || d>num_days(y,m)){day=0;month=0;year=0;}
    else{day = d;}
    if ((day==0) || (m<1 || m>12)){day=0;month=0;year=0;}
    else{month = m;}
    if ((month==0) || (y<1 || y>9999)){day=0;month=0;year=0;}
    else{year = y;}
    if (sep1 != '/' || sep2 != '/'){day=0;month=0;year=0;}
}

int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const{
    return day;
}

bool Date::is_valid() const{
    if (day==0 && month==0 && year==0){return false;}
    else{return true;}
}

int main(){

    Date d3(22333,4,1); d3.write();


    return 0;
}