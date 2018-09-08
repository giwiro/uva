#include <cstdio>

int main() {
    int tc = 0, n, a, max, i = 1;
    scanf("%d", &tc);
    while(tc--) {
        max = 0;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &a);
            if (a > max) max = a;
        }
        printf("Case %d: %d\n", i, max);
        i++;
    }
}

