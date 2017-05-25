#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int k;
    string s;
    while(cin >> k >> s) {
        int g = s.length() / k;
        string::iterator it = s.begin();
        int l = s.length();
        for (int i = 0; i < l; i+=g) {
            string sub = s.substr(i, min(g, l));
            reverse(sub.begin(), sub.end());
            cout << sub;
        }
        cout << endl;
    }
    return 0;
}
