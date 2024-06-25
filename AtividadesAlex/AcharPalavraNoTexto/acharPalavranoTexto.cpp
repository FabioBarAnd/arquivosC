/*
#include <stdio.h>
#include <string.h>
int buscaPalavra(char*, char*);
int main(){
    char palavra[]= "alface";
    char texto[] = "em um belo dia josé foi a sua horta colher alface e tomate.";
    printf("%d\n", buscaPalavra(palavra, texto));
}
int buscaPalavra(char* palavra, char* texto){
    int i=0,j=0;
    for (i=0; i != strlen(texto); i++) {
        if(texto[i]==palavra[j]){
            j++;
        }else{
            j=0;
        }
        if (j == strlen(palavra)) {
            break;
        }
    }
    return (i-(strlen(palavra)-1));
} */
/*
#include <stdio.h>

int buscar(char*, char*);
int main(){
	char texto[20]="aaaabc";
	char busca[5]="ab";
	int i = buscar(texto, busca);
}

int buscar(char*texto, char*busca){
	int i, j;
	for(i=0; texto[i]!='\0'; i++){
		for(j=0;busca[j]!='\0'; j++){
			if(texto[i+j]!=busca[j])
			break;
			
			else if(busca[j+1]=='\0')
			return i;
		}
	}
	return -1;
}*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[41] = "Alex";
	char nome2[11] = "Marino";
	printf("%s", strcat(nome, nome2));
}
int strcat (char*s1, char*s2){
	int i, j;
	i = strlen(s1);
	
	for(j=0; s2[j]!='\0'; j++){
		s1[i] = s2[j];
		s1[i++];
	}
}
