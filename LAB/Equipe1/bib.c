#include "grupofeliz.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

// Insere um ponto no campos da struct TPonto
void item1(){
    ponto valor;
    printf("Informe um valor para o ponto X\n");
    scanf("%d",&(valor.pontoX));
    printf("Informe um valor para o ponto Y\n");
    scanf("%d",&(valor.pontoY));
}


// Insere os pontos na lista TNo
void item2(TNo **pPrim, int tamPontos){
    while(tamPontos >= 3){
        int i;

        int pontoX, pontoY;

        for(i=0;i<tamPontos;i++){
            printf("Informe um valor para o ponto X\n");
            scanf("%d",&pontoX);
            printf("Informe um valor para o ponto Y\n");
            scanf("%d",&pontoY);
            insereInicio(pPrim,pontoX,pontoY);
        }

        if(i==tamPontos){
                tamPontos = 0;
        }
    }
}

// Insere mais um ponto na lista TNo
void item3(TNo **pPrim){
    int pontoX, pontoY;
    printf("Informe um valor para o ponto X\n");
    scanf("%d",&pontoX);
    printf("Informe um valor para o ponto Y\n");
    scanf("%d",&pontoY);
    insereInicio(pPrim,pontoX,pontoY);
}


// Remove o ponto solicitado da lista TNo
void item4(TNo **pPrim, int indiceX, int indiceY){
    assert(pPrim);
    if(*pPrim == NULL) return;
    
    TNo *aux = *pPrim;
    TNo *aux2;

    // remove caso seja o primeiro item
    if(aux->pontoX == indiceX && aux->pontoY == indiceY){
       aux2 = aux->prox;
       free(aux);
       *pPrim = aux2; 
    }
    
    // remove caso seja a partir do segundo item
	while(aux->prox != NULL){
		if((aux->prox)->pontoX == indiceX && (aux->prox)->pontoY == indiceY){
            aux2 = aux->prox->prox;
            free(aux->prox);
            aux->prox = aux2;
            printf("Ponto removido com sucesso!\n");
            break;
		}else{
			aux = aux->prox;
		}
	}
}

void insereInicio(TNo **pPrim, int pontoX, int pontoY){
    assert(pPrim);
    TNo *noAux = malloc(sizeof(TNo));
    if (noAux == NULL) return;
    noAux->pontoX = pontoX;
    noAux->pontoY = pontoY;
    noAux->prox = *pPrim;
    *pPrim = noAux;
}

// Calcula o perimetro do polígono
void item5Perimetro(TNo **pPrim, int tamPontos){
    int vetorX[tamPontos];
    int vetorY[tamPontos];
    int i=0, dist[tamPontos], soma=0;
    assert(pPrim);
    if(*pPrim == NULL) return;
    TNo *aux = *pPrim;
    if(aux != NULL){
        while(aux != NULL){
            vetorX[i] = aux->pontoX;
            vetorY[i] = aux->pontoY;
            aux = aux->prox;
            i++;
        }
    } 
    for(int j=0;j<tamPontos;j++){
        dist[j] = sqrt(pow (vetorX[j+1] - vetorX[j], 2) + pow (vetorY[j+1] - vetorY[j], 2));
        soma = soma + dist[j];
    }
    printf("Perímetro = %d\n",soma);
}

// Printa tudo
void printaTudo(TNo **pPrim){
    TNo *aux = *pPrim;
    
    while(aux != NULL){
        printf("%d\n",aux->pontoX);
        printf("%d\n",aux->pontoY);
        aux = aux->prox;
    }
}
