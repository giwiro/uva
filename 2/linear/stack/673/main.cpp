#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    stack<char> db;
    string s;
    cin >> n;
    cin.ignore(1, '\0');
    while(n--) {
        getline(cin, s);
        bool b = true;
        //cout << "----------------------------------" << endl;
        //cout << s << endl;
        for (auto c: s) {
            //cout << "\t(value): " << c << endl;
            /*if (db.size() == 0 && c != ')' && c != ']') {
                cout << c << "\t =>   push" << endl;
                db.push(c);
                continue;
            }*/
            if (c == ' ') {
                continue;
            }
            char top;
            //cout << "\t(empty): " << db.empty() << endl;
            if (!db.empty()) {
                //cout << "\t(size): " << db.size() << endl;
                top = db.top();
            }else {
                top = '\0';
            }
            //cout << top << " == " << c << "   =>   ";
            if (c == ']') {
                if (top == '[') {
                    //cout << "pop! [close brackets]" << endl;
                    db.pop();
                    //cout << "--------------" << endl;
                    continue;
                }else {
                    //cout << "false! break! [close brackets]" << endl;
                    b = false;
                    //cout << "--------------" << endl;
                    break;
                }
            }else if (c == ')'){
                if (top == '(') {
                    //cout << "pop! (close parenthesis)" << endl;
                    db.pop();
                    //cout << "--------------" << endl;
                    continue;
                }else {
                    //cout << "false! break! (close parenthesis)" << endl;
                    b = false;
                    //cout << "--------------" << endl;
                    break;
                }
            }
            //cout << "se pushea" << endl;
            db.push(c);
            //cout << "--------------" << endl;
        }
        cout << "--------------------" << endl;
        cout << "(b): " << b << "\t(empty): " << db.empty() << endl;
        cout << "\t=> " << (b && db.empty()) << endl;
        if (b && db.empty()) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
    return 0;
}
