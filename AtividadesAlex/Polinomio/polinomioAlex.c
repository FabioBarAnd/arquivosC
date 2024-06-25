#include <stdio.h>
#include <math.h>

double poli(double* vet, int grau, double x) {
    double res = 0.0;
    int j = grau;

    for (int i = 0; i <= grau; i++) {
        res += vet[i] * pow(x, j);
        j--;
    }
    return res;
}

int main() {
    int G;
    double X;

    scanf("%d", &G);
    scanf("%lf", &X);

    double coe[G + 1];

    for (int i = 0; i <= G; i++) {
        scanf("%lf", &coe[i]);
    }
    double res = poli(coe, G, X);
    printf("%.2lf\n", res);

    return 0;
}