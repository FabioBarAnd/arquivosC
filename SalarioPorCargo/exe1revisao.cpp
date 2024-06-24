#include <iostream>

int main(){
	
int horasTrabalhadas, cargo;
int salTotal1 = 1500, salTotal2 = 1800, salTotal3 = 2300;
double salBruto, valorHoraTrab, imp, salReceber;

scanf ("%d", &horasTrabalhadas);
scanf ("%d", &cargo);

if(cargo == 1){
	valorHoraTrab = 0.02 * salTotal1;
	salBruto = horasTrabalhadas * valorHoraTrab;
	imp = 0.09 * salBruto;
	salReceber = salBruto - imp;
	
    printf ("Cargo Ocupado: Balconista\n");
    printf ("Salário Bruto: %.2lf\n", salBruto);
    printf ("Imposto Pago: %.2lf\n", imp);
    printf ("Salário a Receber %.2lf\n", salReceber);

}
else if(cargo == 2){
	
	valorHoraTrab = 0.02 * salTotal2;
	salBruto = horasTrabalhadas * valorHoraTrab;
	imp = 0.10 * salBruto;
	salReceber = salBruto - imp;
	
	printf ("Cargo Ocupado: Vendedor\n");
    printf ("Salário Bruto: %.2lf\n", salBruto);
    printf ("Imposto Pago: %.2lf\n", imp);
    printf ("Salário a Receber %.2lf\n", salReceber);	
}
else if(cargo == 3){
	
	valorHoraTrab = 0.02 * salTotal3;
	salBruto = horasTrabalhadas * valorHoraTrab;
	imp = 0.12 * salBruto;
	salReceber = salBruto - imp;	
	
	printf ("Cargo Ocupado: Gerente\n");
    printf ("Salário Bruto: %.2lf\n", salBruto);
    printf ("Imposto Pago: %.2lf\n", imp);
    printf ("Salário a Receber %.2lf\n", salReceber);
}
else{
printf("Valor nao encontrado");
}

}

//1 = balconista
//2 = vendedor
//3 = gerente
