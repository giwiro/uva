#include <cstdio>
#include <cmath>

int main() {
    int tc, n, i = 1,
        d, m, j;
    scanf("%d", &tc);
    while(tc--) {
        m = 0; j = 0;
        scanf("%d", &n);
        // printf("started n=%d\n", n);
        while(n--) {
            scanf("%d", &d);
            int mextra = (d % 30) == 0 && (d % 10) == 0 ? 1 : 0;
            int jextra = (d % 60) == 0 && (d % 10) == 0 ? 1 : 0;
            m += (ceil(d / 30.0f) + mextra) * 10;
            j += (ceil(d / 60.0f) + jextra) * 15;
            // printf("\tm: %d\tj: %d\n", m, j);
        }
        if (m == j) {
            printf("Case %d: Mile Juice %d\n", i, m);
        }else if (m < j) {
            printf("Case %d: Mile %d\n", i, m);
        }else if (j < m) {
            printf("Case %d: Juice %d\n", i, j);
        }
        i++;
    }
}

