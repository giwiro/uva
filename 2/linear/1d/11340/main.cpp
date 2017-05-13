#include <iostream>
#include <string>
#include <map>
#include <iomanip>

const int MAX_LINE_SIZE = 10000;

using namespace std;

int main() {
	int n, k, acum;
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
			table[c] = val;
		}
		cin >> m;
		cin.ignore();
		while(m--, m >= 0) {
			getline(cin, line);
			// cout << "line: " << line << endl;
			for (auto c : line) {
				acum += table[c];	
			}
		}
		double d = (float)acum/(float)100;
		cout << fixed << setprecision(2) << d << "$" << endl;
	}
	return 0;
}
