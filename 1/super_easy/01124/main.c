#include <cstdio>
#include <cstring>

int main() {
    char line[1024];
    while(fgets(line, 1024, stdin)){
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            printf("%c", line[i]);
        }
    }
    return 0;
}
