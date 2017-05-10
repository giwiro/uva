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
    b.title = line.substr(titleIndex[0], titleIndex[1]);
    b.author = line.substr(titleIndex[1] + 6);
    return b;
}

void printBooks(vector<book> books) {
    for(auto b : books) {
        cout << "title: " << b.title << "\t" << "author: " << b.author << endl;
    }
}

int main() {
    vector<book> books;
    vector<string> ret;
    map<string, int> booksIndex;
    map<string, bool> borrow;
    string line, task, target;
    while(getline(cin, line), line != "END") {
        book b = inputToBook(line);
        books.push_back(b);
        // cout << "line: " << line << endl;
        cout << "title: " << b.title << "\t" << "author: " << b.author << endl;
    }
    sort(ALL(books));

    for (int i = 0; i < books.size(); i++) {
        booksIndex[books[i].title] = i;
        // cout << "book title: " << books[i].title << endl;
    }

    while(getline(cin, line), line != "END") {
        task = line.substr(0, 6);
        // cout << "task: " << task << endl;
        // cout << "line: " << line << endl;
        if (task == "BORROW") {
            target = line.substr(8, line.length() - 10);
            borrow[target] = true;
        }else if (task == "RETURN") {
            ret.push_back(target);
            borrow.erase(target);
        }else if (task == "SHELVE") {
            cout << "shelf: " << ret.size() << endl;
            for (string title : ret) {
                
            }
            ret.clear();
            cout << "END" << endl;
        }
    }

    cout << "-----" << endl;
    printBooks(books); 
    return 0;
}
