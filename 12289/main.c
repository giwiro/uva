#include <cstdio>

using namespace std;

int main() {
    int times;
    char line[1024];
    scanf("%d", &times);
    while(times--){
        scanf("%s", &line);
        //printf("times: %d\n", times);
        printf("Times: %d, %c%c%c\n", times, line[0], line[1], line[2]);
    }
    return 0;
}
