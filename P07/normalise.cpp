#include <iostream>
#include <fstream>
#include <cctype>
#include "print.h"

using namespace std;

void normalise(const string& input_fname, const string& output_fname) {
    ifstream input_file(input_fname);
    ofstream output_file(output_fname);

    string line;
    while (getline(input_file, line)) {
        auto first = line.find_first_not_of(" ");
        auto last = line.find_last_not_of(" ");

        if (first == string::npos) {
            continue;
        }

        line = line.substr(first, last - first + 1);

        for (auto& c : line) {
            c = toupper(c);
        }

        output_file << line << endl;
    }
}
