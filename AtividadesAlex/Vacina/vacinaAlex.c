#include <stdio.h>
#include <string.h>
#define MAX 16

int main() {
    char C[MAX + 1], D[MAX + 1], Z[MAX + 1];
    int t;

    while (scanf("%s %s %s %d", C, D, Z, &t) == 4) {
        int i, j, k, cont = 0;
        int lenC = strlen(C), lenD = strlen(D), lenZ = strlen(Z);
        char subC[MAX + 1][MAX + 1], subD[MAX + 1][MAX + 1], subZ[MAX + 1][MAX + 1];

        for (i = 0; i <= lenC - t; i++) {
            strncpy(subC[i], C + i, t);
            subC[i][t] = '\0';
        }
        for (i = 0; i <= lenD - t; i++) {
            strncpy(subD[i], D + i, t);
            subD[i][t] = '\0';
        }
        for (i = 0; i <= lenZ - t; i++) {
            strncpy(subZ[i], Z + i, t);
            subZ[i][t] = '\0';
        }

        for (i = 0; i <= lenC - t; i++) {
            for (j = 0; j <= lenD - t; j++) {
                for (k = 0; k <= lenZ - t; k++) {
                    if (strcmp(subC[i], subD[j]) == 0 && strcmp(subC[i], subZ[k]) == 0) cont++;
                }
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}