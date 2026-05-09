#include <stdio.h>

#define MAXN 10000000

int spf[MAXN + 1];

void sieve() {
    for (int i = 1; i <= MAXN; i++) spf[i] = i;

    for (int i = 2; i * i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j <= MAXN; j += i) {
                if (spf[j] == j) spf[j] = i;
            }
        }
    }
}

int count_pairs(int n) {
    int distinct = 0;
    int last = -1;

    while (n > 1) {
        int p = spf[n];
        if (p != last) {
            distinct++;
            last = p;
        }
        n /= p;
    }

    int res = 1;
    for (int i = 0; i < distinct; i++) res *= 2;
    return res;
}

int main() {
    sieve();

    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", count_pairs(n));
    }

    return 0;
}
