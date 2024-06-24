#include <iostream>

main(){
	int notdesk, estado;
	double valorEnt;
	
	printf("[1] Desktop 1900\n");
	printf("[2] Notebook 3600\n" );
	printf("Escolha uma opcao: \n");
	scanf("%d", &notdesk);
	printf("\n");
	
	printf("[1] MG 10%\n");
	printf("[2] SP 12%\n");
	printf("[3] RJ 15%\n");
	printf("Escolha uma opcao: \n");
	scanf("%d", &estado);
	
	if((notdesk == 1) && (estado == 1)){
	valorEnt = 1900 * 0.90;
	}
	else if((notdesk == 1)&&(estado == 2)){
	valorEnt = 1900 * 0.88;
	}
	else if((notdesk == 1)&&(estado == 3)){
	valorEnt = 1900 * 0.85;
	}
	else if((notdesk == 2)&&(estado == 1)){
	valorEnt = 3600 * 0.90;
	}
	else if((notdesk == 2)&&(estado == 2)){
	valorEnt = 3600 * 0.88;
	}
	else if((notdesk == 2)&&(estado == 3)){
	valorEnt = 3600 * 0.85;
	}	
	else{
	printf("Opcao de equipamento incorreto");
	}
	
	printf ("Valor entrega: %.2lf", valorEnt);
	
}
