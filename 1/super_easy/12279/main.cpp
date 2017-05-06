#include <iostream>

using namespace std;

int main() {
    int i = 0, cases, val, cont;
    while(i++, cin >> cases, cases) {
        cont = 0;
        for (int i = 1; i <= cases; i++) {
            cin >> val;
            if (val == 0) {
                cont--;
                continue;
            }else {
                cont++;
            }
        }
        cout << "Case " << i << ": " << cont << endl;
    }
    return 0;
}
