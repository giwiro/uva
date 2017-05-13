#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

#define ALL(x) x.begin(), x.end()

using namespace std;

struct book {
    string title;
    string author;
    bool operator<(const book& b) {
        if (author == b.author) {
            return title < b.title;
        }
        return author < b.author;
    }
};

book inputToBook(string line) {
    book b;
    bool start = false, end = false;
    int titleIndex[2];
    for(int i = 0; i < line.length(); i++) {
        if (line[i] == '"' && !start) {
            start = true;
            titleIndex[0] = i + 1;
        }else if (line[i] == '"' && start) {
            end = true;
            titleIndex[1] = i - 1;
            break;
        }
    }
    // cout << "line: " << line << endl;
    b.title = line.substr(titleIndex[0], titleIndex[1]);
    b.author = line.substr(titleIndex[1] + 6);
    return b;
}
/*
void printBooks(vector<book> books) {
    for(auto b : books) {
        cout << "title: " << b.title << "\t" << "author: " << b.author << endl;
    }
}

void printMap(map<string, bool> m) {
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << "first: " << it->first << endl;
    }
}
*/
int main() {
    vector<book> books;
    vector<string> ret;
    map<string, int> booksIndex;
    map<string, bool> borrow;
    string line, task, target;
    while(getline(cin, line), line != "END") {
        // cout << "line: " << line << endl;
        book b = inputToBook(line);
        books.push_back(b);
        // cout << "title: " << b.title << "\t" << "author: " << b.author << endl;
    }
    sort(ALL(books));

    for (int i = 0; i < books.size(); i++) {
        booksIndex[books[i].title] = i;
        borrow[books[i].title] = false;
        // cout << "book title: " << books[i].title << endl;
    }

    int prevIndex = -1;
    string prevTitle;

    while(getline(cin, line), line != "END") {
        task = line.substr(0, 6);
        size_t last = line.find_last_not_of(" ");
        line = line.substr(0, last + 1);
        // cout << "task: " << task << endl;
        // cout << "line: " << line << endl;
        if (task == "BORROW") {
            target = line.substr(8, line.length() - 9);
            borrow[target] = true;
            // cout << ">> BORROW, target: " << target << endl;
        }else if (task == "RETURN") {
            // cout << "line: " << line << endl;
            // cout << "len: " <<  line.length() << endl;
            target = line.substr(8, line.length() - 9);
            ret.push_back(target);
            borrow[target] = false;
            // cout << ">> RETURN, target: " << target << "\tret.size(): " << ret.size() << endl; 
        }else if (task == "SHELVE") {
            // cout << ">> SHELVE, ret.size(): " << ret.size() << endl;
            for (int j = 0; j < ret.size(); j++) {
                // cout << "j: " << j << "\tprimer for: " << ret[j] << endl;
                cout << "Put \"" << ret[j] << "\" ";
                // cout << "booksIndex[b]: " << booksIndex["b"] - 1 << endl;
                prevIndex = booksIndex[ret[j]] - 1;
                if (prevIndex < 0) {
                    cout << "first" << endl;
                    continue;
                }
                prevTitle = books[prevIndex].title;
                while(borrow[prevTitle] == true && prevIndex-- != 0) {
                    prevTitle = books[prevIndex].title;
                }
                if (prevIndex < 0) {
                    cout << "first";
                }else {
                    prevTitle = books[prevIndex].title;
                    cout << "after \"" << prevTitle << "\"";
                }
                cout << endl;
            }
            ret.clear();
            cout << "END" << endl;
        }
    }
 
    return 0;
}
