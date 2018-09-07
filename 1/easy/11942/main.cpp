#include <cstdio>

int main() {
    int tc, last, n;
    bool asc;
    scanf("%d", &tc);
    printf("Lumberjacks:\n");
    while(tc--) {
        int idx = 0;
        asc = false;
        bool unord = false;
        while(idx < 10) {
            scanf("%d", &n);
            if (idx == 1 && n > last) asc = true;
            if ((idx > 0) && ((asc && n < last) || (!asc && n > last))) {
                unord = true;
            }
            last = n;
            idx++;
        }
        if (!unord) printf("Ordered\n");
        else printf("Unordered\n");
    }
}

