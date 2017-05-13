#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int times, prev, num, seq = -1;
    bool jumper;
    while(cin >> times) {
        jumper = true;
        seq = -1;
        cout << "--------------------" << endl;
        cout << "times: " << times << endl;
        cin >> prev;
        if (times == 1) {
            cout << "Scape 1 prev: " << prev << endl;
            cout << "Jolly" << endl;
            continue;
        }
        if (times == 2) {
            cin >> num;
            cout << "Scape 2 prev: " << prev << endl;
            cout << "Scape 2 num: " << num << endl;
            cout << "Jolly" << endl;
            continue;
        }

        for (int i = 0; i < times - 1; i++) {
            cin >> num;
            cout << "--" << endl;
            cout << "prev: " << prev << endl;
            cout << "num: " << num << endl;
            int temp = abs(prev - num);
            cout << "seq: " << temp << endl;
            if (seq != -1) {
                if (seq - 1 != temp) {
                    jumper = false;
                } 
            }else {
                seq = temp;
            }
            seq = temp;
            // cout << "seq: " << seq << endl;
            prev = num;
        }
        if (jumper) {
            cout << "Jolly" << endl;
        }else {
            cout << "Not jolly" << endl;
        }
        cout << "--------------------" << endl;
    }
    return 0;
}
