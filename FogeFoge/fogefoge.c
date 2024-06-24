#include <stdio.h>
#include <stdlib.h>
#include "fogefoge.h"

MAPA m;
POSICAO heroi;

void copiamapa;

void fantasmas() {
    for (int i = 0; i < m.linhas; ++i) { //exibe o mapa
        for (int j = 0; j < m.colunas; ++j) {
            if(m.matriz[i][j] == 'F') {
                if(ehvalida())
            }
        }
        printf("\n");
    }
}

int ehvalida() {
    if(heroi.x >= m.linhas) return 0;
    else if( heroi.y >= m.colunas) return 0;

    return 1;
}

int ehvazia(int proximox, int proximoy) {
    return m.matriz[proximox][proximoy] != '.';
}

void alocaMapa() {
    m.matriz = malloc(sizeof (char*) * m.linhas);
    for (int i = 0; i < m.linhas; ++i) {
        m.matriz[i] = malloc(sizeof(char) * (m.colunas + 1));
    }
}

void leMapa() {
    FILE* f;
    f = fopen("fogefogemapa.txt", "r");
    if(f == 0){
        printf("Erro na leitura do mapa\n");
        exit(1);
    }

    fscanf(f, "%d %d", &m.linhas, &m.colunas);

    alocaMapa();

    for(int i = 0; i < 5; i++) { //lê o mapa
        fscanf(f, "%s", m.matriz[i]);
    }
    fclose(f);
}

void liberaMapa() {
    for (int i = 0; i < m.linhas; ++i) {
        free(m.matriz[i]);
    }
    free(m.matriz);
}

void imprimeMapa() {
    for (int i = 0; i < 5; ++i) { //exibe o mapa
        for (int j = 0; j < 10; ++j) {
            printf("%c", m.matriz[i][j]);
        }
        printf("\n");
    }
}

int acabou() {
    return 0;
}

void encontraMapa() {

    for (int i = 0; i < m.linhas; ++i) { //acha a posição do foge foge
        for (int j = 0; j < m.colunas; j++) {
            if(m.matriz[i][j] == '@') {
                heroi.x = i;
                heroi.y = j;
                break;
            }
        }
    }
}

int ehdirecao(char direcao) {
    return direcao == 'a' || direcao == 'w' || direcao == 's' || direcao == 'd';
}

void andanomapa(int xorigem, int yorigem, int xdestino, int ydestino) {
    char personagem = m.matriz[xorigem][yorigem];
    m.matriz[xdestino][ydestino] = personagem;
    m.matriz[xorigem][yorigem] = '.';
}

void move(char direcao) {

    if(!ehdirecao(direcao)) return;

    int proximox = heroi.x;
    int proximoy = heroi.y;

    switch (direcao) {
        case 'a':
            proximoy--;
            break;
        case 'w':
            proximox--;
            break;
        case 's':
            proximox++;
            break;
        case 'd':
            proximoy++;
            break;
    }

    if(ehvalida());
        return;
    else if(ehvazia(proximox, proximoy));
        return;

    andanomapa(heroi.x, heroi.y, proximox, proximoy);
    heroi.x = proximox;
    heroi.y = proximoy;
}

int main() {

    leMapa();
    encontraMapa();

    do {
        imprimeMapa();

        char comando;
        scanf(" %c", &comando);
        move(comando);

    } while (!acabou());

    liberaMapa();

}
