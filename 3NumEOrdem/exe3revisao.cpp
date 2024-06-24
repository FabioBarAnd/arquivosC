#include <iostream>

main(){
	
	double n1, n2, n3, mediaGeo;
	
	printf("Digite 3 numeros: ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);
	
		 if (n1 <= n2 && n2 <= n3)
    {
      printf("A ordem crescente: %lf %lf %lf\n", n1, n2, n3);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf("A ordem crescente: %lf %lf %lf\n", n1, n3, n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf("A ordem crescente: %lf %lf %lf\n", n2, n1, n3);
    }
  else if (n2 <= n3 && n3 <= n1) 
    {
      printf("A ordem crescente: %lf %lf %lf\n", n2, n3, n1);
    }
  else if (n3 <= n1 && n1 <= n2) 
    {
      printf("A ordem crescente: %lf %lf %lf\n", n3, n1, n2);
    }
  else /* n3 <= n2 && n2 < n1 */
    {
      printf("A ordem crescente: %lf %lf %lf\n", n3, n2, n1);
    }
    
    	media = 
		
		mediaGeo = pow (n1*n2*n3, 1/3);
    	printf("Media geometrica: %lf\n", mediaGeo);
    	
    	raio =    	
    	
    	
}
