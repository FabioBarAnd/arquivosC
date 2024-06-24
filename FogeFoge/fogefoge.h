void fantasmas();
int ehvalida();
int ehvazia(int proximox, int proximoy);
void alocaMapa();
void leMapa();
void liberaMapa();
void imprimeMapa();
int acabou();
void encontraMapa();
int ehdirecao(char direcao);
void andanomapa(int xorigem, int yorigem, int xdestino, int ydestino);
void move(char direcao);

struct mapa {
    char** matriz;
    int linhas, colunas;
};

struct posicao {
    int x, y;
};

typedef struct posicao POSICAO;
typedef struct mapa MAPA;