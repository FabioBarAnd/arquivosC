#include <iostream>
 
int fatorial(int N){
	int i=1, fat=1;
	while(i<=N){
		fat = fat*i;
		i= i+1;
	}
  return fat;
}
main() {
	int combina, n, r;
	printf ("Digite N:");
	scanf("%d", &n);
	printf ("Digite R:");
	scanf("%d", &r);
	combina = fatorial(n) / (fatorial (r)*fatorial(n-r));
	printf ("Combinacao simples: %d\n", combina);
	system("pause");
} 
