#include <cstdio>
#include <algorithm>
#include <cmath>

int main() {
    int a, b, hi, lo, x, y;
    while(scanf("%d %d", &a, &b), (a >= 0 || b >= 0)) {
        if (a == b) {
            printf("0\n");
            continue;
        }else if (a > b) {
            hi = a;
            lo = b;
        }else if (b > a) {
            hi = b;
            lo = a;
        }
        printf("%d\n", std::min(abs(hi - lo), abs(100 - hi) + lo));
    }
}

