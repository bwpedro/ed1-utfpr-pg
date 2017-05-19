#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct TNo{
    int chave;
    struct TNo *prox;
} TNo;

void insereInicio(TNo **pUlt, int k);
void insereFim(TNo **pUlt, int k);
void removeInicio(TNo **pUlt);
void removeFim(TNo **pUlt);
TNo *buscaNo(TNo **Ult, int k);
void printaTudo(TNo **pUlt);

int main(){
    TNo *lista = NULL;
    insereInicio(&lista, 4);
    insereInicio(&lista, 3);
    insereInicio(&lista, 2);
    insereFim(&lista, 5);
    insereFim(&lista, 6);
    insereFim(&lista, 7);
    removeInicio(&lista);
    removeInicio(&lista);
    removeFim(&lista);
    TNo *p = buscaNo(&lista, 7);
    printaTudo(&lista);
}

void insereInicio(TNo **pUlt, int k){
    assert(pUlt);
    TNo *noAux = malloc(sizeof(TNo));
    if (noAux == NULL) return;
    noAux->chave = k;

    if(*pUlt == NULL){
        printf("A lista está vazia, criando o primeiro nó...\n");
        noAux->prox = noAux;
        *pUlt = noAux;
    } else {
        noAux->prox = (*pUlt)->prox;
        (*pUlt)->prox = noAux;
    }

    printf("Nó criado!\n");
}

void insereFim(TNo **pUlt, int k){
    assert(pUlt);
    TNo *aux2;
    if(*pUlt == NULL){
        insereInicio(pUlt,k);
    } else {
        TNo *aux = malloc(sizeof(TNo));
        aux->chave = k;
        aux2 = (*pUlt)->prox;
        (*pUlt)->prox = aux;
        aux->prox = aux2;
        *pUlt = aux;
    }

    printf("Nó criado!\n");
}

void removeInicio(TNo **pUlt){
    assert(pUlt);
    if(*pUlt == NULL){
        printf("Lista vazia!\n");
        return;
    }

    if((*pUlt)->prox == *pUlt){
        free(*pUlt);
        *pUlt = NULL;
        printf("Primeiro nó removido!\n");
        return;
    }
    
    TNo *aux = *pUlt;
    TNo *aux2 = NULL;
    aux2 = aux->prox;
    aux->prox = aux->prox->prox;
    free(aux2);
    printf("Primeiro nó removido!\n");
}


void removeFim(TNo **pUlt){
    assert(pUlt);
    if(*pUlt == NULL){
        printf("Lista vazia!\n");
        return;
    }

    if((*pUlt)->prox == *pUlt){
        free(*pUlt);
        *pUlt = NULL;
        printf("Último nó removido!\n");
        return;
    } else {
        TNo *aux = *pUlt;
        TNo *aux2 = *pUlt;

        while(*pUlt != aux->prox){
            aux = aux->prox;
        }

        aux->prox = (*pUlt)->prox;
        *pUlt = aux;
        free(aux2);
    }
}

TNo *buscaNo(TNo **pUlt, int k){
    assert(pUlt);
    if(*pUlt == NULL){
        printf("Lista vazia!\n");
        return NULL;
    } else {
        TNo *aux = (*pUlt)->prox;
        TNo *aux2 = (*pUlt)->prox;
        while(aux != NULL){
            if(aux->chave == k){
                printf("Nó %d encontrado!\n",k);
                return aux;
            } else {
                aux = aux->prox;
                if(aux == aux2){
                    printf("Nó %d não encontrado!\n",k);
                    return NULL;
                }
            }
        }
    }

    return NULL;
}

void printaTudo(TNo **pUlt){
    if(*pUlt == NULL){
        printf("Lista vazia!\n");
        return;
    }

    TNo *aux = (*pUlt)->prox;

    if(aux == *pUlt){
        printf("%d\n",aux->chave);
        return;
    }
    while(aux != NULL){
        printf("%d\n",aux->chave);
        aux = aux->prox;

        if(aux == (*pUlt)){
            printf("%d\n",aux->chave);
            return;
        }
    }
}