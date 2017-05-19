#include <iostream>
#include <string>
#include <map>
#include <iomanip>

const int MAX_LINE_SIZE = 10000;

using namespace std;

int main() {
        ios::sync_with_stdio(false);
	int n, k;
        long long int acum;
	cin >> n;
	while(n--) {
		map<char, int> table;
		acum = 0;
		char c;
		int val, m;
		string line;
		cin >> k;
		while(k--) {
			cin >> c >> val;
            // cout << "Save to key: " << c << " --> " << val << endl;
			table[c] = val;
		}
		cin >> m;
        // cin.ignore();
        cin.ignore(1000, '\n');
        // cout << "Times: " << m << endl;
		while(m--, m >= 0) {
                        getline(cin, line);
			// cout << "line: " << line << endl;
			for (auto c : line) {
				acum += table[c];	
			}
		}
		double d = (float)acum/(float)100;
                int a = acum / 100;
                int b = acum % 100;
		cout << a << "." << setw(2) << setfill('0') << b  << "$" << endl;
	}
	return 0;
}
