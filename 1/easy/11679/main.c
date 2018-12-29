#include <stdio.h>

int main() {
    int B, N;
    while(scanf("%d %d", &B, &N), B != 0 && N != 0) {
        // printf("B=%d\tN=%d\n", B, N);
        int banks[B],
            money;
        for (int i = 0; i < B; i++) {
            scanf("%d", &money);
            // printf("money=%d\n", money);
            banks[i] = money;
        }
        int from,
            to,
            amount;
        for (int i = 0; i < N; i++) {
            scanf("%d %d %d", &from, &to, &amount);
            // Remove one in order to match with the array index
            from--;
            to--;
            // printf("\tfrom=%d\tto=%d\tamount=%d\n", from, to, amount);
            banks[from] += -amount;
            banks[to] += amount;
        }
        // Check if lal banks are all good
        int r = 1;
        for (int i = 0; i < B; i++) {
            if (banks[i] < 0) {
                r = 0;
            }
        }
        if (r) {
            printf("S\n");
        }else {
            printf("N\n");
        }
    }
    return 0;
}
