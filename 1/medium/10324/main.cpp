#include <cstdio>
#include <cstring>
#include <algorithm>

#define MAX_SIZE 1000000

using namespace std;

int main() {
    char str[MAX_SIZE];
    int i = 1, q, a, b;
    while(scanf("%s", str) != EOF && strncmp(str, "0 0", 3)) {
        scanf("%d", &q);
        printf("Case %d:\n", i);
        while(q--) {
            scanf("%d %d", &a, &b);
            int mn = min(a, b);
            int mx = max(a, b);
            char t = str[mn];
            bool found = false;
            while(mn++, mn <= mx) {
                if (t != str[mn]) {
                    printf("No\n");
                    found = true;
                    break;
                }
            }
            if (!found) printf("Yes\n");
        }
        i++;
    }
}

