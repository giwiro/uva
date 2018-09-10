#include <cstdio>

int main() {
    int tc = 0, f = 0, mon,
        s, a, e;
    scanf("%d", &tc);
    while(tc--) {
        scanf("%d", &f);
        mon = 0;
        while(f--) {
            scanf("%d %d %d", &s, &a, &e);
            mon+= s * e;
        }
        printf("%d\n", mon);
    }
}

