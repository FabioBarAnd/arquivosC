/*#include <stdio.h>

int main(){
	
	int xm, ym, px, py, cx, cy, hip;
	int raio=3;
	
	scanf("%d %d", &px, &py);
	scanf("%d %d", &xm, &ym);	
	
	cx = px - xm;
	cy = py - ym;
	hip = ((cx * cx + cy * cy)*0.5);
	
	if(hip<=raio){
		printf("Ponto interno");
	}
	else{
		printf("Ponto externo");
	}
	return 0;
}*/

#include <stdio.h>

int main(){
	float n, e=0, j;
	int i;
	
	scanf("%f", &n);
	
	for(i=0; i<=n-1; i++){
		for(j=n; j>=i; j--){
		e = e + j * j;			
		}
	}
	printf("%.2f", e);
	
	return 0;
}
