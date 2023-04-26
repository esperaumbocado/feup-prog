#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"
using namespace std;

void born_before(const vector<Person>& persons, const Date& date){
date.show();
cout << ":";

string name;
Date bday = Date();

for (size_t i=0;i<persons.size();i++){
    name = persons[i].get_name();
    bday = persons[i].get_birth_date();
    
    if (bday.is_before(date)){
        cout << " " << name << "-";
        bday.show();
    }
}

}



int main(){

    born_before({ {"Ana",{2000,4,5}}, {"Rui",{1999,5,11}}, {"Susana",{1999,5,13}}, {"Pedro",{2010,2,10}} }, {2000,1,1});

    return 0;

}