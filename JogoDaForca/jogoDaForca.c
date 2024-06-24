#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "jogoDaForca.h"

//variáveis globais
char palavra[TAMANHO_PALAVRA];
char chutes[26];
int chutesDados = 0;

void abertura() {
    printf("*******************************\n");
    printf("*        Jogo da Forca        *\n");
    printf("*******************************\n");
}

void chuta() {
    char chute;
    scanf(" %c", &chute);

    chutes[chutesDados] = chute;
    chutesDados++;
}

int chutouOuNao(char palavra){
    int achou = 0;

    for(int j = 0; j < chutesDados; j++){
        if(chutes[j] == palavra){
            achou = 1;
            break;
        }
    }
    return achou;
}

void forca() {
    int erros = chutesErrados();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < strlen(palavra); i++) {

        int achou = chutouOuNao(palavra[i]);

        if(achou) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

void adicionaPalavra() {
    char quer;

    printf("Você quer adicionar uma nova palavra no jogo? (S/N)");
    scanf(" %c", &quer);

    if(quer == 'S'){
        char novaPalavra[TAMANHO_PALAVRA];
        printf("Qual a nova palavra? ");
        scanf("%s", &novaPalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+"); //r+ significa leitura e escrita no arquivo palavras.txt

        if(f == 0){
            printf("Banco de dados não disponível\n");
            exit(1); //exit = 0 (programa funcionou)      exit > 0 (programa não funcionou)
        }

        int qntd;
        fscanf(f, "%d", &qntd);
        qntd++;

        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qntd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novaPalavra);

        fclose(f);
    }
}

void escolhePalavra() {
    FILE* f;
    f = fopen("palavras.txt", "r"); //r = read (arquivo apenas para leitura)

    if(f == 0){
        printf("Banco de dados não disponível\n");
        exit(1); //exit = 0 (programa funcionou)      exit > 0 (programa não funcionou)
    }

    int qntPalavras;
    fscanf(f, "%d", &qntPalavras);

    srand(time(0));
    int randomico = rand() % qntPalavras;

    for (int i = 0; i <= randomico; ++i) {
        fscanf(f, "%s", palavra);
    }

    fclose(f);
}

int acertou() {
    for(int i = 0; i < strlen(palavra); i++){
        if(!chutouOuNao(palavra[i])) return 0;
    }
    return 1;
}

int chutesErrados() {
    int erros = 0;

    for(int i = 0; i < chutesDados; i++){
        int existe = 0;
        for(int j = 0; j < strlen(palavra); j++) {
            if(chutes[i] == palavra[j]){
                existe = 1;
                break;
            }
        }
        if(!existe) erros++;
    }
    return erros;
}

int enforcou() { //encerra o jogo cado o jogador erre 5 letras
    return chutesErrados() >= 5; //se erros é > 5, jogador tem que ser enforcado
}

int main(){
    abertura();
    escolhePalavra();
    do{
        forca();
        chuta();
    } while (!acertou() && !enforcou()); //enquanto acertou e enforcou for falso
    if(acertou()) {
        printf("\nParabéns, você ganhou!\n\n");

        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");
    } else {
        printf("\nPuxa, você foi enforcado!\n");
        printf("A palavra era **%s**\n\n", palavra);

        printf("    _______________         \n");
        printf("   /               \\       \n");
        printf("  /                 \\      \n");
        printf("//                   \\/\\  \n");
        printf("\\|   XXXX     XXXX   | /   \n");
        printf(" |   XXXX     XXXX   |/     \n");
        printf(" |   XXX       XXX   |      \n");
        printf(" |                   |      \n");
        printf(" \\__      XXX      __/     \n");
        printf("   |\\     XXX     /|       \n");
        printf("   | |           | |        \n");
        printf("   | I I I I I I I |        \n");
        printf("   |  I I I I I I  |        \n");
        printf("   \\_             _/       \n");
        printf("     \\_         _/         \n");
        printf("       \\_______/           \n");
    }
        adicionaPalavra();
    return 0;
}
