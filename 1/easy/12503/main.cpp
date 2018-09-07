#include <cstdio>
#include <cstring>

int main() {
    int tc, n;
    scanf("%d", &tc);
    while(tc--) {
        char line[100];
        scanf("%d\n", &n);
        int i = 0;
        int h[n];
        int count = 0;
        // printf("n: %d\n", n);
        while(n--, n >= 0) {
            fgets(line, 100, stdin);
            
            if (strncmp(line, "LEFT", 4) == 0) {
                h[i] = -1;
                count += -1;
            }else if (strncmp(line, "RIGHT", 5) == 0) {
                h[i] = 1;
                count += 1;
            }else if (strncmp(line, "SAME", 4) == 0) {
                int pos = 0;
                // printf("line: %s\n", line);
                sscanf(line, "SAME AS %d\n", &pos);
                h[i] = h[pos - 1];
                count += h[i];
                // printf("pos: %d !!!!!!!!!!!!!!!!!!!!!!\n", pos);
            }
            i++;
        }
        printf("%d\n", count);
    }
}

