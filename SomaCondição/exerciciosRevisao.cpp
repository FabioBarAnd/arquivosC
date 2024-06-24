#include <iostream>

main() {
	int M, N, soma, x;
    
    while(1){
    	
    soma=0;
    	
    printf("M: ");
	scanf("%d", &M);
	printf("N: ");
	scanf("%d", &N);
	
    if((M <= 0)||(N <= 0)){
		printf("Fim do programa\n");
		break;
	}
	else if(M>N){
    	for(x=N; x<=M; x++){
    		soma = soma + x;
    		printf("%d \n", x);    		
		}
		printf("Soma: %d \n", soma);
	}
	else if(N>M){
    	for(x=M; x<=N; x++){
    		soma = soma + x;
    		printf("%d \n", x);  		
		}
            printf("Soma: %d \n", soma);  
	}
	system ("pause");
} 
    	
	}
    
