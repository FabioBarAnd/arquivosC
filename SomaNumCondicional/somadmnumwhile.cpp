//solicite ao usuario varios numeros, pare quando o número e menor ou igual a zero, ao final apresente a soma. OBS: comando cancela as estruturas de repeticao: break

#include <iostream>

main(){
	
	int x=1, N, soma=0;
	
	while (x){
		printf ("Digite um numero: ");
		scanf ("%d", &N);
		soma = soma + N; //soma+=n
		if (N<=0)
		break;
	}
	printf("A soma dos valores: %d\n", soma);
	system ("pause");
}
