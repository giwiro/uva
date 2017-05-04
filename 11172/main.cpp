#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    while(times--){
        int a, b;
        cin >> a >> b;
        cout << (a > b ? '>' : (a < b ? '<' : '=' )) << endl;
    }
    return 0;
}
