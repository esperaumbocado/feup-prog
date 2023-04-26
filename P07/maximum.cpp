#include <iostream>
#include <iomanip>
#include "show_file.h"

using namespace std;

void maximum(const string& input_fname, const string& output_fname){

    ifstream in(input_fname);
    ofstream out(output_fname);

    double x,max;
    int internal_counter=0;

    while(in>>x){
        out << fixed << setprecision(3) << x <<  endl;
        internal_counter++;
    }

    ifstream in_out(output_fname);

    for(int i=0;in_out>>x;i++){
        if (i==0){
            max = x;
        }
        else{
            if (x>max){
                max = x;
            }
        }
    }

    out<<"count="<<setprecision(3)<<internal_counter<<"/max="<<max<< fixed<<endl;
    

}