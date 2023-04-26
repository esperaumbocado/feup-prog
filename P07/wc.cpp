#include <iostream>
#include <fstream>
#include "wc.h"
using namespace std;


wcresult wc(const string& filename){

    wcresult result = {0,0,0};
    ifstream in(filename);
    string line,word;
    ifstream ln(filename, ios::binary);
    ln.seekg(0,ios::end);
    result.bytes = ln.tellg();

    while (getline(in,line)){

        result.lines++;
        istringstream iss(line);

        while(iss >> word){
            result.words++;
        }
    }


    return result;

}


int main(){

    { wcresult r = wc("p2_test1.txt"); 
  cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n'; }

    { wcresult r = wc("p2_test2.txt"); 
  cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n'; }

    { wcresult r = wc("p2_test3.txt"); 
  cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n'; }

    return 0;
}