#include <iostream>

using namespace std;

int main() {
    int times, i = 0, a, b ,c;
    cin >> times;
    while(i++, times--) {
        cin >> a >> b >> c;
        cout << "Case " << i << ": ";
        if (a > 20 || b > 20 || c > 20) {
            cout << "bad" << endl;
        }else {
            cout << "good" << endl;
        }
    }
    return 0;
}
