#include <iostream>
main(){
	int c1, c2, ano;
	ano = 2023;
	printf("Habitantes cidade 1: ");
	scanf("%d", &c1);
	printf("Habitantes cidade 2: ");
	scanf("%d", &c2);
	
	while (c1 <= c2){
	c1 = c1 + 15;
	c2 = c2 + 10;
	ano = ano + 1;
    }
	printf ("Ano: %d", ano);	
}




// % = resto
