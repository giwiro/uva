#include <iostream>
#include <string>

using namespace std;

int main() {
    int times, total = 0, ammount;
    string operation;
    cin >> times;
    while(times--) {
        cin >> operation;
        if (operation == "report") {
            cout << total << endl;
        }else {
            cin >> ammount;
            total += ammount;
        }
    }
    return 0;
}
