#include <iostream>

main(){
	int x, temp, maior, dia;
	
	for(x=1; x<=7; x++){
		
	printf("Dia: %d      Temperatura: ", x);
	scanf ("%d", &temp);
	
	if (x==1){
   	maior = temp;
   	dia = x;
   }
   else if(temp > maior) {
   	maior = temp;
    dia = x;
    }

   }
   
        if (dia == 1){
    printf("Maior temperatura ocorreu no domingo\n"); 	
	}
	else if (dia == 2){
    printf("Maior temperatura ocorreu na segunda\n"); 	
	}
	else if (dia == 3){
    printf("Maior temperatura ocorreu na terca\n"); 	
	}
	else if (dia == 4){
    printf("Maior temperatura ocorreu na quarta\n"); 	
	}
	else if (dia == 5){
    printf("Maior temperatura ocorreu na quinta\n"); 	
	}
	else if (dia == 6){
    printf("Maior temperatura ocorreu na sexta\n"); 	
	}
	else if (dia == 7){
    printf("Maior temperatura ocorreu no sabado\n"); 	
	}
	
	system ("pause");
	
}
