#include <iostream>
#include <string>

using namespace std;

int main() {
    string word = "";
    int i = 0;
    while(getline(cin, word), i++, word != "#") {
        cout << "Case " << i << ": ";
        if (word == "HELLO") {
           cout << "ENGLISH" << endl;
           continue;
        }else if (word == "HOLA") {
            cout << "SPANISH" << endl;
            continue;
        }else if (word == "HALLO") {
            cout << "GERMAN" << endl;
            continue;
        }else if (word == "BONJOUR") {
            cout << "FRENCH" << endl;
            continue;
        }else if (word == "CIAO") {
            cout << "ITALIAN" << endl;
            continue;
        }else if (word == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN" << endl;
            continue;
        }else {
            cout << "UNKNOWN" << endl;
        }
    }
    return 0;
}
