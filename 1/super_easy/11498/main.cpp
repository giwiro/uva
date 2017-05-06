#include <iostream>

using namespace std;

int main() {
    int cases;
    int x, y, a, b;
    while(cin >> cases) {
        cin >> x >> y;
        for (int i = 0; i < cases; i ++) {
            cin >> a >> b;
            if (x == a || y == b) {
                cout << "divisa" << endl;
                continue;
            }
            if (b > y) {
                cout << "N";
            }else {
                cout << "S";
            }
            if (a > x) {
                cout << "E";
            }else {
                cout << "O";
            }
            cout << endl;

        }
    }
    return 0;
}
