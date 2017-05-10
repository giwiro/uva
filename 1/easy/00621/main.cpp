#include <iostream>
#include <string>

using namespace std;

int main() {
    int times;
    long val;
    cin >> times;
    while(times--) {
        cin >> val;
        string str = to_string(val);
        cout << "val: " << val << "\t";
        if (val % 100 == 35){
            cout << "-" << endl;
        }else if (val % 10 == 4 && str[0] == '9') {
           cout << "*" << endl;
        }else if (str[0] == '1' && str[1] == '9' && str[2] == '0') {
            cout << "?" << endl;
        }else {
            cout << "+" << endl;
        }
    }
    return 0;
}
