#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct TNo{
    int chave;
    struct TNo *ant;
    struct TNo *prox;
} TNo;

void insereInicio(TNo **pPrim, int k);
void insereFim(TNo **pPrim, int k);
void removeInicio(TNo **pPrim);
void removeFim(TNo **pPrim);
TNo *buscaNo(TNo **pPrim, int k);
void printaTudo(TNo **pPrim);

int main(){
    TNo *lista = NULL;
    insereInicio(&lista, 4);
    insereInicio(&lista, 3);
    insereInicio(&lista, 2);
    insereFim(&lista, 5);
    insereFim(&lista, 6);
    insereFim(&lista, 7);
    buscaNo(&lista, 2);
    removeInicio(&lista);
    buscaNo(&lista, 2);
    removeFim(&lista);
    printaTudo(&lista);
}

void insereInicio(TNo **pPrim, int k){
    assert(pPrim);
    TNo *aux = malloc(sizeof(TNo));
    if (aux == NULL) return;
    aux->chave = k;

    if(*pPrim == NULL){
        printf("A lista está vazia, criando o primeiro nó...\n");
        aux->prox = *pPrim;
        aux->ant = *pPrim;
    } else {
        (*pPrim)->ant = aux;
        aux->prox = *pPrim;
        aux->ant = NULL;
    }

    printf("Nó criado!\n");
    *pPrim = aux;
}

void insereFim(TNo **pPrim, int k){
    assert(pPrim);
    TNo *aux = *pPrim;

    if(*pPrim == NULL){
        insereInicio(pPrim,k);
    } else {
        while((aux->prox) != NULL){
            aux = aux->prox;
        }
        aux->prox = malloc(sizeof(TNo));
        if (aux->prox == NULL) return;
        aux->prox->chave = k;
        aux->prox->ant = aux;
        aux->prox->prox = NULL;
    }

    printf("Nó criado!\n");
}

void removeInicio(TNo **pPrim){
    assert(pPrim);
    TNo *aux = *pPrim;
    if(aux == NULL){
        printf("Lista vazia!\n");
        return;
    }
    if(aux->prox == NULL){
        *pPrim = NULL;
    } else {
        *pPrim = aux->prox;
        aux->prox->ant = NULL;
    }
    free(aux);
    printf("Primeiro nó removido!\n");
}

void removeFim(TNo **pPrim){
    assert(pPrim);
    TNo *aux = *pPrim;
    if(aux == NULL){
        printf("Lista vazia!\n");
        return;
    }
    if(aux->prox == NULL){
        *pPrim = NULL;
    } else {
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->ant->prox = NULL;
    }
    free(aux);
    printf("Último nó removido!\n");
}

TNo *buscaNo(TNo **pPrim, int k){
    assert(pPrim);
    TNo *aux = *pPrim;

    if(aux == NULL){
        printf("Lista vazia!\n");
        return NULL;
    }else{
        while(aux != NULL){
            if(aux->chave == k){
                printf("Nó encontrado!\n");
                return aux;
            }else{
                aux = aux->prox;
            }
        }
    }

    printf("Nó não encontrado!\n");
    return NULL;
}

void printaTudo(TNo **pPrim){
    TNo *aux = *pPrim;
    if(aux == NULL){
        printf("Lista vazia!\n");
    }

    while(aux != NULL){
        printf("%d\n",aux->chave);
        aux = aux->prox;
    }
}