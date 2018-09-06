#include <cstdio>
#include <cstring>

#define BUFFER_SIZE 2000

int main() {
    int ts;
    char numbers[BUFFER_SIZE];
    scanf("%d", &ts);
    while(ts--) {
        scanf("%s", numbers);
        // fgets(numbers, BUFFER_SIZE, stdin);
        int size = strlen(numbers);
        // printf("(%d) numbers: %s\n", strlen(numbers), numbers);
        if (strcmp(numbers, "1") == 0 || strcmp(numbers, "4") == 0 || strcmp(numbers, "78") == 0) {
            printf("+\n");
        }else if(numbers[size - 2] == '3' && numbers[size - 1] == '5') {
            printf("-\n");
        }else if(numbers[0] == '9' && numbers[size - 1] == '4') {
            printf("*\n");
        }else if(strncmp(numbers, "190", 3) == 0) {
            printf("?\n");
        }else { 
            printf("+\n");
        }
    }
}

