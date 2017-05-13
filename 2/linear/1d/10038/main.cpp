#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main() {
    int times, prev, num, seq = -1;
    bool jumper;
    bool check[3000];
    while(cin >> times) {
        jumper = true;
	memset(check, false, sizeof check);
        seq = -1;
        // cout << "--------------------" << endl;
        // cout << "times: " << times << endl;
        cin >> prev;
        if (times == 1) {
            // cout << "Scape 1 prev: " << prev << endl;
            cout << "Jolly" << endl;
            continue;
        }

        for (int i = 0; i < times - 1; i++) {
            cin >> num;
            // cout << "--" << endl;
            // cout << "prev: " << prev << endl;
            // cout << "num: " << num << endl;
            int temp = abs(prev - num);
            // cout << "seq: " << temp << endl;
            seq = temp;
	    check[seq] = true;
            // cout << "seq: " << seq << endl;
            prev = num;
        }

	for (int j = 1; j < times; j++) {
		if (!check[j]) {
			jumper = false;
		}
	}
        if (jumper) {
            cout << "Jolly" << endl;
        }else {
            cout << "Not jolly" << endl;
        }
        // cout << "--------------------" << endl;
    }
    return 0;
}
