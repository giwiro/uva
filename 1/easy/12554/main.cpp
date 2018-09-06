#include <cstdio>

const int hb_size = 16;
const int hb_str_size = 10;

const char hb[hb_size][hb_str_size] = {
    "Happy", "birthday", "to", "you",
    "Happy", "birthday", "to", "you",
    "Happy", "birthday", "to", "Rujia",
    "Happy", "birthday", "to", "you"
};

int main() {
    int tc, c, i = 0, hb_idx = 0;
    scanf("%d", &tc);
    c = tc;
    char names[tc][100];
        
    while(c--)
        scanf("%s", &names[i++]);

    while(true) {
        bool f = (hb_idx % hb_size) == hb_size - 1;
        bool all = hb_idx > tc;
        printf("%s: %s\n", names[hb_idx % tc], hb[hb_idx % hb_size]);
        if (f && all) {
            return 0;
        }
        hb_idx++;
    }
    return 0;
}

