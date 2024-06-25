#include <stdio.h>
void hanoi(int N, char origem, char destino, char aux) {
    if (N == 1) {
        printf("Mover disco 1 do pino %c para pino %c\n", origem, destino);
        return;
    }
    hanoi(N - 1, origem, aux, destino);

    printf("Mover disco %d do pino %c para pino %c\n", N, origem, destino);

    hanoi(N - 1, aux, destino, origem);
}
int main() {
    int N;

    scanf("%d", &N);

    hanoi(N, 'A', 'B', 'C');

    return 0;
}