#include <iostream>
#include <string>
#include <map>

using namespace std;

void print(map<char, int> db) {
    cout << db['i'] << " i, ";
    cout << db['v'] << " v, ";
    cout << db['x'] << " x, ";
    cout << db['l'] << " l, ";
    cout << db['c'] << " c" << endl;
}

void increment(int n, map<char, int> &db) {
    if (n < 5) {
        if (n == 4) {
            db['i'] += 1;
            db['v'] += 1;
        }else {
            db['i'] += n;
        }
    }else if (n < 10) {
        if (n == 9) {
            db['i'] += 1;
            db['x'] += 1;
        }else {
            db['i'] += n - 5;
            db['v'] += 1;
        }
    }else if (n < 50) {
        int d, u;
        d = n/10;
        u = n % 10;
        if (u) {
            increment(u, db);
        }
        if (d == 4) {
            db['x'] += 1;
            db['l'] += 1;
        }else {
            db['x'] += d;
        }
    }else if (n < 100) {
        int d, u;
        d = n/10;
        u = n % 10;
        if (u) {
            increment(u, db);
        }
        if (d == 9) {
            db['x'] += 1;
            db['c'] += 1;
        }else {
            db['l'] += 1;
            db['x'] += d - 5;
        }
    }else if (n == 100) {
        db['c'] += 1;
    }
}

int main() {
    int n;
    while(cin >> n, n){
        int i = 1;
        map<char, int> db = {
            {'i', 0},
            {'v', 0},
            {'x', 0},
            {'l', 0},
            {'c', 0}
        };
        while(i <= n) {
            increment(i, db);
            i++;
        }
        cout << n << ": ";
        print(db);
    }
    return 0;
}
