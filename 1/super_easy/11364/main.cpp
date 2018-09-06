#include <cstdio>

int main() {
    int ts = 0, l, r, n, x;
    scanf("%d", &ts);
    while(ts--) {
        l = 99;
        r = 0;
        scanf("%d", &n);
        while(n--) { 
            scanf("%d", &x);
            if (x > r) r = x;
            if (x < l) l = x;
        }
        printf("%d\n", (r - l) * 2);
    }
}

