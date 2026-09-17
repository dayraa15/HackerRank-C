#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MOD 1000000007LL

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y)
        return -1;
    else if (x > y)
        return 1;
    else
        return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    int *A = (int *)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    qsort(A, N, sizeof(int), compare);

    long long totalPasangan = (long long)N * (N - 1) / 2;

    long long pasanganSama = 0;
    long long count = 1;

    for (int i = 1; i < N; i++)
    {
        if (A[i] == A[i - 1])
        {
            count++;
        }
        else
        {
            pasanganSama += count * (count - 1) / 2;
            count = 1;
        }
    }

    pasanganSama += count * (count - 1) / 2;

    long long jawaban = totalPasangan - pasanganSama;

    jawaban %= MOD;

    printf("%lld\n", jawaban);

    free(A);

    return 0;
}
