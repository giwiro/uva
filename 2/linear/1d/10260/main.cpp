#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    string name;
    map<char, char> db = {
        {'B', '1'},
        {'F', '1'},
        {'P', '1'},
        {'V', '1'},
        {'C', '2'},
        {'G', '2'},
        {'J', '2'},
        {'K', '2'},
        {'Q', '2'},
        {'S', '2'},
        {'X', '2'},
        {'Z', '2'},
        {'D', '3'},
        {'T', '3'},
        {'L', '4'},
        {'M', '5'},
        {'N', '5'},
        {'R', '6'}
    };
    while(cin >> name) {
        char prev = '\0';
        for (auto c : name) {
            if (db[c] && db[c] != prev) cout << db[c];
            prev = db[c];
        }
        cout << endl;
    }
    return 0;
}
