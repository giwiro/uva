#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    map<string, string> db;
    string key, val;
    string line;
    while(getline(cin, line), line != "\0") {
        istringstream iss(line);
        iss >> val >> key;
        db[key] = val;
    }

    while(cin >> line) {
        string tmp = db[line];
        if (tmp == "\0") {
            cout << "eh" << endl;
            continue;
        }
        cout << tmp << endl;
    }
    return 0;
}
