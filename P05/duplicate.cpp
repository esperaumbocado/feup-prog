#include <iostream>
using namespace std;


int size_of_cstr(const char s[]){

    int i = 0;
    while (s[i]!='\0'){
        i++;
    }

    return i+1;
}

char* duplicate(const char s[]){

    int size = size_of_cstr(s);
    char* result = new char[size];

    for (int i=0;i<size;i++){
        result[i] = s[i];
    }

    return result;
}

int main(){

    { char* s = duplicate("");
  cout << "\"" << s << "\"\n";
  delete [] s; }

  { char* s = duplicate("a");
  cout << "\"" << s << "\"\n";
  delete [] s; }

    { char* s = duplicate("C++");
  cout << "\"" << s << "\"\n";
  delete [] s; }

  return 0;

}