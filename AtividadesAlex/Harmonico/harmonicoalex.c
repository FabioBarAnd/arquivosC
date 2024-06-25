#include <stdio.h>

int main(){
	int n, i;
	float h = 0.0;
	
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		h = h + 1.0/i;
	}
	printf("%.8f", h);
	
	return 0;
}
