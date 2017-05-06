#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i = 0, times, a, b, c, max, min;
    cin >> times;
    while(i++, i <= times) {
        cin >> a >> b >> c;
        int s[3] = {a, b, c};
        sort(s, s + 3);
        cout << "Case " << i << ": " << s[1] << endl;
    }
    return 0;
}
