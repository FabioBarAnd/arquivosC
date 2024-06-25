#include <stdio.h>

int main() {
    int X, M;

    scanf("%d%d", &X, &M);
    X += X % M;

    if ((X % M) == 0) printf("STOP\n");
    else printf("NONSTOP\n");

    return 0;
}