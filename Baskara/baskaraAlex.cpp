/*
#include <stdio.h>
#include <math.h>

main(){
	
	float a, b, c, x1, x2;
	
	scanf("%f %f %f", &a, &b, &c);
	
	x1 = (-b + pow(b*b-4*a*c, 0.5))/(2*a);
	
	x2 = (-b - pow(b*b-4*a*c, 0.5))/(2*a);
     
     if (b*b-4*a*c < 0){
     	printf("NARN");
	 }
	else{
	printf("%.2f %.2f\n", x1,x2);	
	}
	
	return 0;
}
*/

#include <stdio.h>
#include <math.h>

void raizes (float, float, float, float*, float*);

int main(){
	
	float a, b, c, x1, x2;
	
	scanf("%f %f %f", &a, &b, &c);
	
	raizes(a, b, c, &x1, &x2);
		
	  if (b*b-4*a*c < 0){
    printf("NARN\n");
	 }else{
	printf("%.2f %.2f\n", x1,x2);	
	 }
	
	return 0;
}
void raizes(float a, float b, float c, float*x1, float*x2){	
	*x1 = (-b + pow(b*b-4*a*c,0.5))/(2*a);	
    	
	*x2 = (-b - pow(b*b-4*a*c,0.5))/(2*a);		
}
