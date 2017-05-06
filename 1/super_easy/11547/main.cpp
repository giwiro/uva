#include <iostream>

using namespace std;

int main() {
    int cases, num;
    while(cin >> cases) {
        for (int i = 0; i < cases; i++) {
            cin >> num;
            int res = (((((((num * 567) / 9) + 7492 ) * 235) / 47) - 498) % 100) /10;
            cout << abs(res) << endl;
        }
    }
    return 0;
}
