#include <stdio.h>
#include <stdlib.h>

typedef struct TNo{
    char chave;
    struct TNo *prox;
}TNo;

int main(){
    TNo *a = malloc(sizeof(TNo));
    a->chave = '0';
    a->prox = malloc(sizeof(TNo));
    (a->prox)->chave = '1';
    (a->prox)->prox = malloc(sizeof(TNo));
    ((a->prox)->prox)->chave = '2';
    ((a->prox)->prox)->prox = NULL;
}