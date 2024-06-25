#include <stdio.h>

int main(){
    int t; //quantidade de casos de teste
    int m; //comprimento da s
    int n; //numero de tentativas
    char letras[m];
    int tentativas[n];
    int i, j;

    printf("Digite a quantidade de casos de teste: ");
    scanf("%d", &t);
    for(i=1; i<=t; ){
        printf("Digite o comprimento da string: ");
        scanf("%d", &m);
        printf("Digite o número de tentativas: ");
        scanf("%d", &n);
        printf("Digite a string: ");
        scanf("%s", letras);
        for(j=1;j<=n; j++){
            scanf("%d", &tentativas[j]);
        }
        i++;
    }
    return 0;
}