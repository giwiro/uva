#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

map<char, char> opp = {
    {'(', ')'},
    {'[', ']'},
    {')', '('},
    {']', '['},
};

int main() {
    int n;
    cin >> n;
    cin.ignore(1, '\0');
    while(n--) {
        stack<char> ss;
        bool deny = false;
        string line;
        getline(cin, line);
        for(auto c: line) {
            if (c == ' ') {
                continue;
            }
            if (c == '(' || c == '[') {
                ss.push(c);
            }else {
                if (ss.empty()) {
                    deny = true;
                    break;
                }else {
                    char tmp = ss.top();
                    if (tmp != opp[c]) {
                        deny = true;
                        break;
                    }else {
                        ss.pop();
                    }
                }
            }
        }
        if (ss.empty() && !deny) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}
