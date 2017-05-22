#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lerAposta(int *aposta, int n);
void sorteiaValores(int *sorteio, int n);
void printaTudo(int *sorteio, int *aposta, int n, int *acertos, int cont);
int *comparaAposta(int *aposta, int *sorteio, int *qtdacertos, int n, int *cont);

int main(){
    int nAposta, *pAposta = NULL, *pSorteio = NULL, *pAcertos = NULL, cont=0;
    srand(time(NULL));
    printf("Quantos valores deseja apostar? OBS: 0 a 20\n");
    scanf("%d",&nAposta);
    pAposta = malloc(sizeof(int)*nAposta);
    pSorteio = malloc(sizeof(int)*nAposta);
    lerAposta(pAposta,nAposta);
    sorteiaValores(pSorteio,nAposta);
    pAcertos = comparaAposta(pAposta,pSorteio,pAcertos,nAposta,&cont);
    printaTudo(pSorteio,pAposta,nAposta,pAcertos,cont);
}

void lerAposta(int *aposta, int n){
    for(int i=0;i<n;i++){
        printf("Informe um número de 0 a 100 para a aposta %d: ",i+1);
        scanf("%d",(aposta+i));
    }
}

void sorteiaValores(int *sorteio, int n){
    for(int i=0;i<n;i++){
        *(sorteio+i) = rand()%100;
    }
}

void printaTudo(int *sorteio, int *aposta, int n, int *acertos, int cont){
    printf("Número(s) sorteado(s): ");

    for(int i=0;i<n;i++){
        printf("%d ",*(sorteio+i));
    }
    printf("\n");

    if(cont == 0){
        printf("Você não acertou nenhum número :(\n");
        return;
    }

    printf("Parabéns, você acertou %d número(s)\n",cont);
    printf("Número(s): ");

    for(int i=0;i<cont;i++){
        printf("%d ",*(acertos+i));
    }
    
    printf("\n");

}

int *comparaAposta(int *aposta, int *sorteio, int *qtdAcertos, int n, int *cont){
    int aux = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(aposta+i) == *(sorteio+j)){
                (*cont)++;
            }
        }
    }
    qtdAcertos = malloc(sizeof(int)*(*cont));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(*(aposta+i) == *(sorteio+j)){
                *(qtdAcertos+aux) = *(aposta+i);
                aux++;
            }
        }
    }
    return qtdAcertos;
}