#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct TNo{
    int chave;
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
    insereInicio(&lista, 2);
    insereInicio(&lista, 3);
    insereFim(&lista, 4);
    insereFim(&lista, 5);
    removeInicio(&lista);
    removeFim(&lista);
    TNo *p = buscaNo(&lista, 3);
    printaTudo(&lista);
}

void insereInicio(TNo **pPrim, int k){
    assert(pPrim);
    TNo *noAux = malloc(sizeof(TNo));
    if (noAux == NULL) return;
    noAux->chave = k;
    noAux->prox = *pPrim;
    *pPrim = noAux;
    printf("Nó criado!\n");
}

void insereFim(TNo **pPrim, int k){
    assert(pPrim);
    TNo *aux = *pPrim;
    if(aux == NULL){
        insereInicio(pPrim,k);
    }else{
        while((aux->prox) != NULL){
            aux = aux->prox;
        }
        aux->prox = malloc(sizeof(TNo));
        if((aux->prox) == NULL) return;

        (aux->prox)->chave = k;
        (aux->prox)->prox = NULL;
        printf("Nó criado!\n");
        return;
    }
    return;
}

void removeInicio(TNo **pPrim){
    assert(pPrim);
    if(*pPrim == NULL){
        printf("Lista vazia!\n");
        return;
    }
    TNo *aux = *pPrim;
    *pPrim = (*pPrim)->prox;
    free(aux);
    printf("Primeiro nó removido!\n");
}

void removeFim(TNo **pPrim){
    assert(pPrim);
    TNo *ant = NULL;
    TNo *atual = *pPrim;

    if(atual == NULL){
        printf("Lista vazia!\n");
        return;
    }else{
        while(atual->prox != NULL){
            ant = atual;
            atual = atual->prox;
        }

        if(ant != NULL){
            ant->prox = NULL;
        } else {
            *pPrim = NULL;
        }

        free(atual);
        printf("Último nó removido!\n");
    }
}

TNo *buscaNo(TNo **pPrim, int k){
    assert(pPrim);

    TNo *aux = *pPrim;

    if(aux != NULL){
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