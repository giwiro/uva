#include <cstdio>

int main() {
    int n, b, h, w;
    while(scanf("%d %d %d %d", &n, &b, &h, &w) != EOF) {
        int lower = -1;
        // printf("data: n: %d; b: %d; h: %d; w: %d\n", n, b, h, w);
        while(h--) {
            // printf("h--: %d\n", h);
            int price, available, iter_w = w;
            scanf("%d", &price);
            // printf("price: %d\n", price);
            // printf("w: %d\n", w);
            while(iter_w--) {
                // printf("iter_w--: %d\n", iter_w);
                scanf("%d", &available);
                int new_lower = n * price;
                if ((available >= n && (n * price) < b) && (lower == -1 || (lower != -1 && new_lower < lower))) {
                    // printf("new_lower:%d VS lower:%d!! price: %d; available: %d\n", new_lower, lower, price, available);
                    lower = new_lower;
                }
            }
        }
        // printf("finished\n");
        if (lower == -1) {
            printf("stay home\n");
        }else {
            printf("%d\n", lower);
        }
    }
    return 0;
}
