#include <cstdio>
#include <iostream>
#include <vector>

int main() {
    int tc, i;
    scanf("%d", &tc);
    while(tc--) {
        int idx = 0, v, max = 0;
        char url[101];
        std::vector<std::pair<std::string, int>> db;
        while(idx < 10) {
            scanf("%s %d", &url, &v);
            if (v > max) max = v;
            db.push_back(std::make_pair(std::string(url), v));
            idx++;
        }
        i++;
        printf("Case #%d:\n", i);
        for (auto const &pair: db) {
            if (pair.second == max) {
                printf("%s\n", pair.first.c_str());
            }
        }
    }
}

