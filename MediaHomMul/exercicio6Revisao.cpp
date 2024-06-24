/*#include <iostream>

main(){
	int idade, x, nMulh, nHom, media, soma;
	char sexo;
	
	nMulh=0;
	nHom=0;
	soma=0;
	
	for(x=1;x<=5;x++){
	
		printf("Sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);
		printf("Idade: ");
		scanf("%d", &idade);
		
	if(sexo == 'F')	nMulh++;
	
	if(sexo == 'M') {
	soma = soma + idade;
	nHom++;	
	}	
	}
	media = soma/nHom;

	printf("Media da idade dos homens: %d\n", media);
	printf("Quantidade de mulheres: %d\n", nMulh);


}*/ 
#include <stdio.h>

int main() {
    int num, digit, count = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Digite um algarismo: ");
    scanf("%d", &digit);
    while (num > 0) {
        if (num % 10 == digit) {
            count++;
        }
        num /= 10;
    }
    printf("O algarismo %d aparece %d vezes no número digitado.\n", digit, count);
    return 0;
}
