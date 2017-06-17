#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

#define ALL(x) x.begin(), x.end()

using namespace std;

void print(const vector<string> names) {
    for (auto name : names) {
        cout << name << endl;
    }
}

int main() {
    int times;
    while(cin >> times) {
        vector<string> names;
        string name;
        int L, C, R;
        cout << "------------------------------------------------------------" << endl;
        cin.ignore(1, '\0');
        while(times--) {
            getline(cin, name);
            names.push_back(name);
        }
        sort(ALL(names));
        auto it = max_element(ALL(names), 
                [](const string a, const string b) -> bool { return a.length() < b.length(); });

        L = (*it).size();
        C = ((60-L)/(L+2)) + 1;
        R = ceil(names.size()/(double)C);
        C = ceil(names.size() /(double)R);
        // cout << "------------> L: " << L << "\tC: " << C << "\tR:" << R << endl;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                int extra = j + 1 == C ? 0 : 2;
                string n;
                if (j + 2 == C && i > (names.size() % R) - 1) {
                    extra = 0;
                }
                try {
                    n = names.at(i + (j*R));
                    cout << left << setfill(' ') << setw(L + extra) << n;
                }catch (const out_of_range &oor) {
                    n = "";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
