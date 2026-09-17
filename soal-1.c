#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = 0;

    for (int i = 0; i < n; i++) {
        long long a;
        scanf("%lld", &a);
        total = total + a;
    }

    if (total < 0) {
        total = -total;
    }

    printf("%lld\n", total);

    return 0;
}
