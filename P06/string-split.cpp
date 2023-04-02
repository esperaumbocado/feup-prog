#include <iostream>
#include "print_string.h"
using namespace std;

void split(const string& s, vector<string>& v){

    int start_pos,size=s.length(), next_space;
    string search_internal,internal_return;

    for (int i=0;i<size-1;i++){
        if (i==0 && s[i]!=' '){
            next_space = s.find(' ');
            internal_return = s.substr(0,next_space);
            v.push_back(internal_return);

        }
        else if (s[i]==' ' && s[i+1]!=' '){
            start_pos = i+1;
            search_internal = s.substr(i+1,size-i);
            next_space = search_internal.find(' ');
            internal_return = s.substr(start_pos,next_space);
            v.push_back(internal_return);
        }
    }
}


int main(){

    { string s = "  a b  c ";
  vector<string> v;
  split(s, v);
  print(v); }


  { string s = "C++ LEIC FCUP FEUP";
  vector<string> v;
  split(s, v);
  print(v); }



    return 0;
}

