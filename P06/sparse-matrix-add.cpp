#include "smatrix.h"
#include <algorithm>

inline bool pointAgreater(const sm_entry &a, const sm_entry &b) {
    return !(a.row > b.row || (a.row == b.row && a.col >= b.col));
}

struct accounting {
    size_t linha;
    size_t coluna;
};

void sum(const smatrix& a, const smatrix& b, smatrix& r) {

    vector<accounting> accountedfor;

    for (sm_entry s : a) {

        for (sm_entry ss : b) {

            if (s.col == ss.col && s.row == ss.row && s.value + ss.value != 0) {
                r.push_back({s.row, s.col, s.value + ss.value});
                accountedfor.push_back({s.row, s.col});
            }

            else if (s.col == ss.col && s.row == ss.row && s.value + ss.value == 0) {
                accountedfor.push_back({s.row, s.col});
            }
        }
    }

    bool flag = true;
    for (sm_entry s : a) {

        for (accounting b : accountedfor) {

            if (s.col == b.coluna && s.row == b.linha) flag = false;

        }
        if (flag) {
            r.push_back(s);
        }

        flag = true;
    }

    for (sm_entry s : b) {
        for (accounting b : accountedfor) {
            if (s.col == b.coluna && s.row == b.linha) flag = false;
        }
        if (flag) {
            r.push_back(s);
        }

        flag = true;
    }

    sort(r.begin(), r.end(), pointAgreater);

}

int main() {

    { smatrix r;
  sum({ {0, 0, -1}, {0, 1, 2},  {5, 10, 20 }, {10, 5, -20} },
      { {0, 0, 1}, {0, 1, -2},  {5, 10, -20}, {10, 5, 20} },
      r);
  print(r); }

  { smatrix r;
  sum({ {0, 0, -1}, {0, 1, 2}, {5, 10, 20}, {10, 5, -20} },
      { {0, 0, 1}, {0, 1, -2}, {10, 5, 20} },
      r);
  print(r); }


    return 0;
}