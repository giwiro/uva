#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    int i = 0;
    while(i++, getline(cin, line), line != "*") {
        cout << "Case " << i << ": " << "Hajj-e-";
        if (line == "Hajj") {
            cout << "Akbar" << endl;
        }else {
            cout << "Asghar" << endl;
        }
    }
    return 0;
}
