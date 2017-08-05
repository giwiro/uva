#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    string line;
    list<char> result;
    list<char>::iterator it;

    while(getline(cin, line), line != "\0") {
        result.clear();
        it = result.begin();

        for (auto c: line) {
            if (c == '[') {
                it = result.begin();
            }else if (c == ']') {
                it = result.end();
            }else {
                result.insert(it, c);
            }
        }

        for(it = result.begin(); it != result.end(); it++) {
            cout << *it;
        }
        cout << endl;
    }
	return 0;
}
