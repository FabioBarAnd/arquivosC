#include <iostream>
 
using namespace std;
 
main() {
	
	int x, numero, maior, menor;
 
 for(x=1;x<=3; x++){
 	printf("Digite o %d numero: ", x);
 	scanf("%f", &numero);
   
   if (x==1){
   	maior = numero;
   	menor = numero;
   }
   else if(numero > maior) maior = numero;
   else if(numero < menor) menor = numero;
   
}
   
    printf("\n");
 	printf("%d\n", menor);
 	printf("%d\n", numero);
 	printf("%d\n", maior);
 
    system ("pause");
 
    return 0;


}
