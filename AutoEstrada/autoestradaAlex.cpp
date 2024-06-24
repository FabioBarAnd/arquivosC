#include <stdio.h>

int main(){
	int p, C, n, painel;
	char pista;
	
	painel = 0;
	
	scanf("%d", &C);
  
   //if(p > 0 || p <= 1000000) p == C;
	
	for(n=1;n<=C;n++){
		scanf("%c", &pista);
		
	if(pista == 'P') painel = painel + 2;
	
	if(pista == 'C') painel = painel + 2;
	
	if(pista == 'A') painel = painel + 1;
	
	if(pista == 'D') painel = painel;	
	}
	printf("%d\n", painel);
}
