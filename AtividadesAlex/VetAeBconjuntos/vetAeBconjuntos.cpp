#include <stdio.h>

int verificar(int b,int a[],int tam);

int main(){
	
	int a[5];
	int b[5];
	int rep [5];
	int i, j;

    printf("A = ");	
	for(i=0; i<=4; i++){
		scanf("%d", &a[i]);
	}
	
    printf("B = ");	
	for(i=0; i<=4; i++){
		scanf("%d", &b[i]);
	}

    printf("A - B = ");
	for(i=0; i<=4; i++){
		if(a[i]!=b[i]){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	
	printf("B - A = ");
	for(i=0; i<=4; i++){
		if(b[i]!=a[i]){
			printf("%d ", b[i]);
		}
	}
	printf("\n");
	
	printf("A U B = ");	
	for(i=0; i<=4; i++){

	}
	printf("\n");
	
	printf("A interseccao B = ");	
	for(i=0; i<=4; i++){
		if(a[i]==b[i]){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
		
	return 0;
}
