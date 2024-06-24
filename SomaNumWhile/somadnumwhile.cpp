#include <iostream>

main(){
	
	int x=1, N, soma=0;
	
	while (x<=4){
		printf ("Digite um numero: ");
		scanf ("%d", &N);
		soma = soma + N; //soma+=n
		x++;
	}
	printf("A soma dos valores: %d\n", soma);
	system ("pause");
}
