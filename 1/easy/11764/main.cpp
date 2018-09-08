#include <cstdio>

int main() {
    int tc = 0, n, h, last = -1, i = 1;
    int hi = 0, lo = 0;
    scanf("%d", &tc);
    while(tc--) {
        hi = 0;
        lo = 0;
        last = -1;
        scanf("%d", &n);
        while(n--) {
            scanf("%d", &h);
            if (last != -1 && h > last) hi++;
            else if (last != -1 && h < last) lo++;
            // printf("[%d] last=%d, hi=%d, lo=%d\n", h, last, hi, lo);
            last = h;
        }
        printf("Case %d: %d %d\n", i, hi, lo);
        i++;
    }
}

