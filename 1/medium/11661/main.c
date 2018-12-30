#include <stdio.h>
#include <limits.h>

int main() {
    int L;
    while(scanf("%d", &L), L != 0) {
        char line[L];
        scanf("%s", &line);
        char last = '\0';
        // printf("\tintitial Last=%c\n", last);
        int min = INT_MAX, lastIndex = 0;
        // printf("INITIATING WITH L=%d\n", L);
        for (int i = 0; i < L; i++) {
            if (line[i] == 'Z') {
                last = 'Z';
                // No need to save the index
                printf("0\n");
                break;
            }
            if (line[i] == 'R' || line[i] == 'D') {
                if ((line[i] == 'R' && last == 'D') || (line[i] == 'D' && last == 'R')) {
                    int diff = i - lastIndex;
                    if (diff < min) {
                        min = diff;
                    }
                }
                lastIndex = i;
                last = line[i];
            }
            // printf("\t[%d]\tline[%d]=%c\tlastIndex=%d\tlast=%c\tmin=%d\n", i, i, line[i], lastIndex, last, min);
        }
        if (last != 'Z') {
            printf("%d\n", min);
        }
    }
    return 0;
}
