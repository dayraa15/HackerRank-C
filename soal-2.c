#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    long long x, y, z;

    if (a <= b && a <= c) {
        x = a;
        if (b <= c) { y = b; z = c; }
        else        { y = c; z = b; }
    } else if (b <= a && b <= c) {
        x = b;
        if (a <= c) { y = a; z = c; }
        else        { y = c; z = a; }
    } else {
        x = c;
        if (a <= b) { y = a; z = b; }
        else        { z = a; y = b; }
    }


    if (x == y || y == z) {
        printf("%lld\n", (long long)0);
        return 0;
    }

    long long jarakKeBawah = y - x; 
    long long jarakKeAtas  = z - y;
    long long hasil;
    if (jarakKeBawah < jarakKeAtas) {
        hasil = jarakKeBawah;
    } else {
        hasil = jarakKeAtas;
    }

    printf("%lld\n", hasil);

    return 0;
}
