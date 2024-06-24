#include <iostream>

main(){
	int x, cod, genios=0, mcodigo;
	double p1, p2, media, menor;
	
	for(x=1; x<=4; x++){
		
	printf("Codigo: ");
	scanf ("%d", &cod);
	printf("Prova 1: ");
	scanf ("%lf", &p1);
	printf("Prova 2: ");
	scanf ("%lf", &p2);
	
	media = (p1 + p2)/2;
	
	printf("Media: %.1lf\n\n", media);	
	
	if (x==1){
   	menor = media;
   	mcodigo = cod;
   }
   else if(media < menor) {
   	menor = media;  	mcodigo = cod;
   }
	
	if(media>8){
    media = genios;
	genios++;	
	} 
	}
	
	printf("Alunos com media superior a 8: %d\n", genios);
	printf("Aluno de codigo %d possui a menor media: %.1lf\n", mcodigo, menor);
	
	system ("pause");
	
}
