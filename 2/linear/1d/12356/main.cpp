#include <iostream>
#define MAX 100005

using namespace std;


struct node {
    int value;
    node* prev;
    node* next;
} sol[MAX];
/*
void printList(node first, int size) {
    cout << "[ " << first.value;
    node* n = first.next;
    while(n) {
        cout << ", " << n->value;
        n = n->next;
    }
    if (!n) {
        cout << " ]" << endl;
        return;
    }
}
*/
int main() {
    int s, b, l, r;
    while(cin >> s >> b, s && b) {
        sol[1].value = 1;
        // cout << "S: " << s << ", B: " << b << endl;
        if (s > 1) {
            sol[1].next = &sol[2];
            sol[s].next = NULL;
        }else sol[1].next = NULL;
        for (int i = 2; i <= s; i++) {
            sol[i].value = i;
            sol[i].prev = &sol[i - 1];
            sol[i - 1].next = &sol[i];
        }
        while(b--) {
            cin >> l >> r;
            // cout << "\tL: " << l << ", R: " << r << endl;
            
            node* last_l = NULL;
            node* last_r = NULL;
            if (sol[l].prev) last_l = sol[l].prev;
            if (sol[r].next) last_r = sol[r].next;


            if (last_l) {
                cout << last_l->value;
                if (last_r) last_l->next = last_r;
                else last_l->next = NULL;
            }else cout << "*";
            cout << " ";
            if (last_r) {
                cout << last_r->value;
                if (last_l) last_r->prev = last_l;
                else last_r->prev = NULL;
            }else cout << "*";
            cout << endl;
            // printList(sol[1], s);
        }
        cout << "-" << endl;
    }
    return 0;
}
