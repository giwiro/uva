#include <iostream>

using namespace std;

int main() {
    int init, a, b, c, resp;
    while(cin >> init >> a >> b >> c, a || b || c) {
        resp = 1080;
        resp += ((init - a + 40) % 40) * 9;
        resp += ((b - a + 40) % 40) * 9;
        resp += ((b - c + 40) % 40) * 9;
        cout << resp << endl;
    }
    return 0;
}
