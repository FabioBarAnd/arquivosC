#include <iostream>
 
void fatorial(float N){
	float i=1, fat=1;
	while(i<=N){
		fat = fat*i;
		i= i+1;
	}
  printf ("O fatorial vale: %.2f\n", fat);
}
main() {
	float N;
	printf ("Digite N:");
	scanf("%f", &N);
	fatorial(N);
	system("pause");
} 
