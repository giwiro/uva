#include <cstdio>
#include <iostream>
#include <cstring>
#include <map>
#include <cmath>

#define GROUP_SIZE 10
#define NAME_SIZE 14

using namespace std;

int main() {
    int g = 0, i = 0;
    while(scanf("%d", &g) != EOF) {
        // printf("------ %d ------\n", g);
        int gi = 0, mon, p;
        char name[NAME_SIZE];
        // map<name, <money, disbursement>
        map<string, pair<int, int>> db;
        char names[GROUP_SIZE][NAME_SIZE];
        while(gi < g) {
            scanf("%s", name);
            db[string(name)] = make_pair(0, 0);
            strcpy(names[gi], name);
            // printf("read=%s, copied=%s\n", name, names[gi]);
            gi++;
        }
        gi = g;
        // printf(">>> calculating part and mod\n");
        while(gi--) {
            scanf("%s %d %d", name, &mon, &p);
            if (p == 0) continue;
                db[string(name)].first = mon;
            int part = ceil(mon / p);
            int mod = mon % p;
            // printf("\tpart=%d\n", part);
            db[string(name)].second += mod;
            while(p--) {
                scanf("%s", name);
                db[string(name)].second += part;
            }
        }
        if (i > 0) printf("\n");
        // printf(">>> printing\n");
        for (int i = 0; i < g; i++) {
            string s = string(names[i]);
            printf("%s %d\n", names[i], db[s].second - db[s].first);
        }
        i++;
    }
}

