#include <iostream>

int CCorrente(){
	system("cls");
    int op;
	printf ("[1] Dados do cliente \n");
	printf ("[2] Saldo \n");
	printf ("[3] Cheque especial \n");
	printf ("[4] Saque \n");
	printf ("[5] Deposito \n");
	printf ("[6] Aplicacao financeira \n");
	printf ("[7] Aquisicao cartao de credito \n");
	printf ("[8] Pagamento do cartao de credito \n");
	printf ("[9] Fim do programa \n");
	printf ("Escolha a opcao: \n");
	scanf ("%d", &op);
    return op; 	
}

int main(){
	int nconta, opcao, saldo = 0, deposito, chequeEsp = 0, saque, dividas, debPendente, aplicacao, rentabilidade;
	int ncontaCli, nomeCli, cartao=0;
	
	char nome[20];
	printf ("Numero da conta do cliente: \n");
	scanf ("%d", &nconta);
	printf ("Nome do cliente: \n");
	scanf ("%s", &nome);
	
	while (1){
          opcao = CCorrente();

    if (opcao==1){
	printf ("Numero da conta do cliente: \n");
	scanf ("%d", &ncontaCli);
	printf ("Nome do cliente: \n");
	scanf ("%s", &nomeCli);
    saldo = 0;
          	system("pause");
       }
    else if (opcao==2){
	printf ("Saldo Cliente: R$%d\n", saldo);
	printf ("Limite de Cheque Especial: R$%d\n", chequeEsp);
	printf ("\n");
	printf ("Saldo para Saque: R$%d \n", chequeEsp+saldo);
          	system("pause");
       }
    else if (opcao==3){
	printf ("O banco te garante R$1000 de cheque especial\n");
	chequeEsp = chequeEsp + 1000;
          	system("pause");
       }
        else if (opcao==4){
	printf ("Digite a quantia do seu saque: \n");
	printf ("Nao se esqueca, seu saque nao pode maior que seu saldo e seu cheque especial\n");
	scanf ("%d", &saque);
	if(saque > saldo+chequeEsp){
		printf ("Esse saque nao podera ser efetuado");
	}
	else{
		saldo = saldo - saque;
	}
          	system("pause");
	    }
    else if (opcao==5){
	printf ("Qual o valor do seu deposito: \n");
	scanf ("%d", &deposito);
	saldo = saldo + deposito;
          	system("pause");
       }
    else if (opcao==6){
    printf("Seu saldo: %d\n", saldo);
    printf("Digite quanto dinheiro voce deseja aplicar: \n");
    scanf("%d", &aplicacao);
    if (aplicacao <= saldo ){
            saldo =  (aplicacao * 0.005) + saldo;
          	
       }
       else{
       	printf ("Saldo insuficiente \n");
	   }
	   system("pause");
	   } 
    else if (opcao==7){
	printf ("%s conta %d tem direito a um cartao de credito.\n", nome, nconta);
	cartao = 1; 
          	system("pause");
       }
    else if (opcao==8){
    	if (cartao == 1){
	printf ("Hora de pagar as contas. Digite o quanto voce esta devendo: \n");
	scanf ("%d", &dividas);
	if (dividas <= saldo) 	saldo = saldo - dividas;
	else 	printf ("Saldo Insuficiente \n");
}
 else {
 	printf ("Nao ha cartao cadastrado \n");
 }
    	system("pause");
       }
       
    else if (opcao==9) {
		break;
	}	
}

}
