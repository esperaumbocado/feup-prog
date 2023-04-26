#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;


string string_toupper(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;

}

int count(const string& fname, const string& word){

    string x,copy_word,copy_x;
    int counter=0;
    ifstream in(fname);
    copy_word = string_toupper(word);

    while (in>>x){
        copy_x = string_toupper(x);
        if (copy_x==copy_word){
            counter+=1;
        }
        else{continue;}
    }
    
    return counter;
}





int main(){

    cout << count("p1_test_a.txt", "THE") << '\n';
    cout << count("p1_test_a.txt", "0") << '\n';
    cout << count("p1_test_a.txt", "code") << '\n';

    return 0;
}