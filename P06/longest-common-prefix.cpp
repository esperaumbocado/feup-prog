#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longest_prefix(const vector<string>& v) {

    string first_word = v[0];
    bool flag = true;
    int internal_counter = 0;
    string prefixo = "";

    for (char a : first_word) {

        for (unsigned int i = 0; i < v.size(); i++) {

            if (v[i][internal_counter] != a) flag = false;

        }

        if (flag){ 
            prefixo+=a;
        }
        else{
            break;
        }

        internal_counter++;
    }

    return prefixo;
}

int main() {
    
    cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april" }) << "\"\n";
    cout << "\"" << longest_prefix({ "sedatesingratiateconcomitant", "sedatesparleypoliteness", "sedateselbowsHahn", "sedatesgloweringimbecility's", "sedatesbuttershexing", "sedatesKwangju'smulch's", "sedatesunwiserN", "sedatesprepossessedboggles", "sedatesinterrelationshipdialings", "sedatesgropesNelsen's", "sedatesMayfaircondemnations" }) << "\"\n";

    return 0;
}