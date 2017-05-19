#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    int chave;
    struct TNo *prox;
} TNo;

TNo *criaCabeca();
void insereInicio(TNo *cabeca, int k);
void insereFim(TNo *cabeca, int k);
void removeInicio(TNo *cabeca);
void removeFim(TNo *cabeca);
TNo *buscaNo(TNo *cabeca, int k);
void printaTudo(TNo *cabeca);

int main(){
    TNo *cabeca = criaCabeca();
    insereInicio(cabeca, 2);
    insereFim(cabeca, 3);
    insereFim(cabeca, 4);
    removeFim(cabeca);
    TNo *p = buscaNo(cabeca, 3);
    printaTudo(cabeca);
}

TNo *criaCabeca(){
    TNo *cabeca = NULL;
    cabeca = malloc(sizeof(TNo));
    if (cabeca == NULL) return NULL;
    cabeca->chave = -1;
    cabeca->prox = NULL;
    printf("Cabeça criada!\n");
    return cabeca;
}

void insereInicio(TNo *cabeca, int k){
    TNo *novoNo = malloc(sizeof(TNo));
    if (novoNo == NULL) return;
    novoNo->chave = k;
    novoNo->prox = cabeca->prox;
    cabeca->prox = novoNo;
    printf("Nó criado!\n");
}

void insereFim(TNo *cabeca, int k){
    TNo *aux = cabeca;

    // Se não houver nenhum nó na lista, a inserção será no inicio
    if(aux->prox == NULL){
        insereInicio(cabeca, k);
    } else {
        do{
            aux = aux->prox;
        }while((aux->prox)!= NULL);
        aux->prox = malloc(sizeof(TNo));
        if(aux->prox == NULL) return;
        (aux->prox)->chave = k;
        (aux->prox)->prox = NULL;
        printf("Nó criado!\n");
    }
}

void removeInicio(TNo *cabeca){
    if(cabeca->prox == NULL) return;
    TNo *aux = cabeca->prox->prox;
	free(cabeca->prox);
    cabeca->prox = aux;
    printf("Primeiro nó removido!\n");
}

void removeFim(TNo *cabeca){
    TNo *ant = NULL;
    TNo *atual = cabeca;

    if(atual->prox == NULL) return;
    else{
        while(atual->prox != NULL){
            ant = atual;
            atual = atual->prox;
        }
        if(ant != NULL){
            ant->prox = NULL;
        } else {
            cabeca->prox = NULL;
        }
        free(atual);
    }
    printf("Último nó removido!\n");
}

TNo *buscaNo(TNo *cabeca, int k){
    TNo *aux = cabeca->prox;
    
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

void printaTudo(TNo *cabeca){
    TNo *aux = cabeca->prox;
    
    if(aux == NULL){
        printf("Lista vazia!\n");
    }

    while(aux != NULL){
        printf("%d\n",aux->chave);
        aux = aux->prox;
    }
}