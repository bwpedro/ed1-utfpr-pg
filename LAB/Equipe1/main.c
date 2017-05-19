#include "grupofeliz.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main(){
    int tamPontos,indiceX,indiceY;
    TNo *pPrim = NULL;
    
    item1();
    
    printf("Quantos pontos você deseja para o poligono? OBS: Maior que 3\n");
    scanf("%d",&tamPontos);
    item2(&pPrim, tamPontos);

    item3(&pPrim);
    
    printf("Qual coordenadas deseja remover?\n");
    scanf("%d,%d",&indiceX,&indiceY);
    item4(&pPrim,indiceX,indiceY);

    item5Perimetro(&pPrim,tamPontos);

    printaTudo(&pPrim);
    
    return 0;
}