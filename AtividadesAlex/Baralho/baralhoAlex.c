#include <stdio.h>

int embaralhar(int a, int c, int p) {
    int b = 2 * a <= p ? 2 * a : 2 * a - (p + 1);
    return b == 1 ? c : embaralhar(b, c + 1, p);
}

int main() {
    int p = 0;
    scanf("%d", &p);
    printf("%d\n", embaralhar(1, 1, p));
    return 0;
}