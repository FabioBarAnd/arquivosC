#include <stdio.h>

void AxB(int p, int q, int r, int A[p][q], double B[q][r]) {
    double C[p][r];

    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            C[i][j] = 0.0;
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            for (int k = 0; k < q; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < r; j++) {
            printf("%.0lf", C[i][j]);
            if (j < r-1) printf("\t");
        }
        printf("\n");
    }
}

int main() {
    int p, q, r;

    scanf("%d %d", &p, &q);

    int A[p][q];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &q, &r);

    double B[q][r];
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < r; j++) {
            scanf("%lf", &B[i][j]);
        }
    }
    AxB(p, q, r, A, B);

    return 0;
}