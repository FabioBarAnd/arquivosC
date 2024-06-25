/*#include <stdio.h>

int contadigitos(int num, int alg){
	int i, cont=0;
	
    while (num > 0) {
        if (num % 10 == alg) {
            cont++;
        }
        num /= 10;
    }
	return cont;
}

int main(){
    int d, n, a, b, i;
    int qntvezesa, qntvezesb;
    int permutacao=0, npermutacao=0;
    printf("Digite um numero A: ");
    scanf("%d", &a);
    printf("Digite um numero B: ");
    scanf("%d", &b);
    
    if (a == b) printf("A e permutacao de B\n");    
    else{    
    for(i=1; i<10; i++){
    qntvezesa = contadigitos(a, i);
    qntvezesb = contadigitos(b, i);
        
    if (qntvezesa == qntvezesb){
        permutacao++;
        }    
    else npermutacao++;    
    }    
    if(npermutacao>0) printf("A nao e permutacao de B\n");    
    else if (npermutacao==0) printf("A e permutacao de B\n");
    }    
    return 0;
}

#include <stdio.h>
#include <math.h>

int calcDist (int zx, int zy, int xm, int ym){
	int cx, cy, hip, aux;
	cx = zx - xm;
	cy = zy - ym;
	aux = cx * cx + cy * cy;
	hip = sqrt(aux);
	return hip;	
}

int main(){	
	int xm, ym, zx, zy, i, n;
	int dist, maior, menor; 
	
	printf("Digite os pontos X e Y: ");
	scanf("%d %d", &zx, &zy);
	printf("Digite uma quantidade N: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++){
	printf("Digite dois pontos: ");	
	scanf("%d %d", &xm, &ym);		
	dist = calcDist (zx, zy, xm, ym);
	
    if (i==1){
   	maior = dist;
   	menor = dist;
    }
    else if(dist > maior) maior = dist;
    else if(dist < menor) menor = dist;
    }
    printf("A menor distancia entre os pontos e: %d", menor);
    
    return 0;
}*/

#include <stdio.h>
int primo(int n){
	int i, cont=0;
	
	for(i=2; i<n; i++){
		if(n%i==0) cont=cont+1;
	}
    if(n>0 && n==3) return 1;
	else if(cont>0) return 0;
	else if (cont == 0)return 1;
}

int main(){
	int n, p, q, cousin;
	int pprimo, qprimo;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	//cousin = primo(n);
	//printf("O numero que voce digitou: %d", cousin);
	for(p=2; p<n; p++){
		pprimo = primo(p);
		if(pprimo == 1){
			q = n - p;
			qprimo = primo(q);
			if(qprimo == 1)
			printf("SIM");
			break;
		}else{
		printf("NAO");
		break;
	}
	}
}
	/*for(q=2; q<n; q++){
		qprimo = primo(q);
		if(qprimo == 1) break;
	}
	if (p+q==n) printf("SIM");
	else printf("NAO");
}*/
