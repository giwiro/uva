#include <cstdio>

#define ll long long int

int calc(ll n) {
    // printf("entered n=%d\n", n);
    if (n < 10) {
        return n;
    }else {
        int acum = 0, mod;
        ll t = n;
        while(t != 0) {
            mod = t % 10;
            //printf("t=%d, mod=%d\n", t, mod);
            acum += mod;
            t = t / 10;
            //printf("updated t=%d\n", t);
        }
        return calc(acum);
    }
}

int main() {
    ll n;
    while(scanf("%ld", &n), n != 0) {
        // printf("------ Processing: %d ------\n", n);
        printf("%d\n", calc(n));
    }
    return 0;
}

