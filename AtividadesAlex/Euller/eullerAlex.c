#include <stdio.h>

int main() {
    int i, div, N;
    long double E, fato;
    scanf("%d", &N);

    E = 1.0;
    for (i = 1; i <= N; i++) {
        fato = 1.0;
        for (div = 2; div <= i; div++) {
            fato = fato * div;
        }
        E = E + (1.0 / fato);
    }

    printf("%.17Lf\n", E);
    return 0;
}