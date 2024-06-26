#include <stdio.h>
#include <stdlib.h>
#include "ListaSequencial.h"

struct lista {
    int qtd;
    struct aluno dados[MAX];
};

void libera_lista (Lista* li){
    free(li);
}

Lista* cria_lista() {
    Lista* li;
    li = (Lista*) malloc(sizeof(struct lista));

    if(li != NULL)
        li->qtd = 0;
    return li;
}

int main() {
    Lista *li;
    li = cria_lista();
    libera_lista(li);
}
