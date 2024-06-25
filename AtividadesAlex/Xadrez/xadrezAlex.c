#include <stdio.h>

int main(){

    int N, G;
    scanf("%d", &N);
    scanf("%d", &G);
    int tam = N * 8;

    printf("P2\n");
    printf("%d\t%d\n", tam, tam);
    printf("%d\n", G);

    int quad = 0;
    int posi = 0;

    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            if(quad < N){
                if(posi < N){
                    printf("%d", G);
                }else{
                    printf("0");
                }
            }else{
                if(posi < N){
                    printf("0");
                }else{
                    printf("%d", G);
                }
            }
            printf("\t");
            posi++;
            if(posi == N * 2){
                posi = 0;
            }
        }
        printf("\n");
        quad++;
        posi = 0;
        if(quad == N * 2){
            quad = 0;
        }
    }
    return 0;
}