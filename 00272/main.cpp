#include <cstdio>
#include <string.h>

void print(char l[]) {
    bool open = true;
    for(int i = 0; i < strlen(l); i++) {
        char v = l[i];
        /*if (v == '"') {
            if (open == true) {
                printf("%s", "``");
                open = false;
                printf("%s: %d", "changed to false", open);
            }else {
                printf("%s", "''");
                open = true;
            }
        }else {
            printf("%c", v);
        }*/
        printf("%c", v);
    }
}

int main() {
    char line[256];
    while(scanf("%s", line)) {
        print(line);
    }
    return 0;
}
