#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct TNo{
    // chave é o que você quer na sua lista
    int chave;
    struct TNo *prox;
}TNo;

void insereInicio(TNo **pPrim, int chave);
void alocaNo(TNo **pPrim,int chave);

int main(){
    TNo *pPrim = NULL;
    int chave = 1;
    insereInicio(&pPrim,chave);
}

void insereInicio(TNo **pPrim, int chave){
    assert(pPrim);
    //caso a lista seja vazia
    if(*pPrim == NULL){
        alocaNo(pPrim, chave);
        return;
    }

    //caso a lista possua pelo menos um nó
    TNo *aux = *pPrim;
    alocaNo(pPrim, chave);
    (*pPrim)->prox = aux;
}

void alocaNo(TNo **pPrim,int chave){
    *pPrim = malloc(sizeof(TNo));
    (*pPrim)->chave = chave;
    (*pPrim)->prox = NULL;
}
