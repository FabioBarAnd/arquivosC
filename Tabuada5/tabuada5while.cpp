#include <iostream>

main(){
	int x, tabuada;
	
	printf("Tabuada:");
	scanf ("%d", &tabuada);
	
	x = 1;
	while (x<=10){ //fim
		printf ("%d X %d = %d\n", tabuada, x, tabuada*x);
		x++; //incremento
	}
	
	printf("\n");
	system ("pause");
	
}
