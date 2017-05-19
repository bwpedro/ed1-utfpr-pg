#include "lista.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

TNo *insereInicioListaSimples(TNo **pPrim, int chave){
    assert(pPrim);
    TNo *noAux = malloc(sizeof(TNo));
    if (noAux == NULL) return NULL;
    noAux->chave = chave;
    noAux->prox = *pPrim;
    *pPrim = noAux;
    return noAux;
}

void removePrimeiro(TNo **pPrim){
    assert(pPrim);
    if(*pPrim == NULL) return;
    TNo *aux = *pPrim;
    *pPrim = (*pPrim)->prox;
    free(aux);
}

TNo *buscaChave(TNo **pPrim, int chave){
    assert(pPrim);

    TNo *aux = *pPrim;
    
    if(aux != NULL){
		while(aux != NULL){
		    if(aux->chave == chave){
                return aux;
			}else{
				aux = aux->prox;
			}
		}
	}
	return NULL;
}