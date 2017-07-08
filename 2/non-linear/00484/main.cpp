#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, int> m;
    vector<int> v;
    int c;
    while(cin >> c) {
        if (m[c] == 0) v.push_back(c);
        m[c] += 1;
    }
    for (const auto t: v) cout << t << " " << m[t] << endl;
    return 0;
}
