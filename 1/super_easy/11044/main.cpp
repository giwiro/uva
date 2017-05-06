#include <iostream>

using namespace std;

int main() {
    int times;
    cin >> times;
    while(times--, times >= 0){
        int a, b;
        cin >> a >> b;
        cout << (a / 3) * (b / 3) << endl;
    }
    return 0;
}
