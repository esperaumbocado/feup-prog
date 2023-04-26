#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void calc_medians(const string& input_fname, const string& output_fname) {
    ifstream intxt(input_fname);
    ofstream outxt(output_fname);
    string line;

    outxt << fixed << setprecision(1);

    while (getline(intxt, line)) {
        if (line[0] == '#') {
            continue;
        }

        stringstream s(line);
        string letter;
        s >> letter;

        vector<double> temp_v;

        double temp;
        while (s >> temp) {
            temp_v.push_back(temp);
        }

        if (!temp_v.empty()){
            unsigned long n = temp_v.size();
            sort(temp_v.begin(), temp_v.end());

            if (n % 2 == 0){
                double median_e = 0.5 * (temp_v[ n / 2 - 1] + temp_v[ n / 2]);
                outxt << letter << " " << median_e << endl;
            }else{
                double median_o = temp_v[n/2];
                outxt << letter << " " << median_o << endl;
            }
        }
    }

    intxt.close();
    outxt.close();
}

void show_file(const string& file) {
    ifstream in(file);
    cout << "==> " << file << " <==\n";
    string line;
    while (getline(in, line)) {
        cout << line << '\n';
    }

    in.close();
}

int main() {
    calc_medians("p5_test2.txt", "p5_test2_out.txt");
    show_file("p5_test2_out.txt");
    return 0;
}
