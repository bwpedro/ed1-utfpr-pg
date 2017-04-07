#include <stdio.h>
#include <stdlib.h>

void falhaDeSegmentacao();
void leituraIlegal();
void escritaIlegal();
void vazamentoDeMemoria();

int main(){
    falhaDeSegmentacao();
    return 0;
}

void falhaDeSegmentacao(){
    char *p = NULL;
    *p = 'd';
    // Tentativa de gravar 'd' no endereço de memória NULL
}

void leituraIlegal(){
    int *a;
    a = (int *) malloc(sizeof(int));
    *a = 2;
    free(a);
    printf("%d\n",*a);
    // Tentativa de ler a variável que foi liberada
}

void escritaIlegal(){
    int *a;
    a = (int *) malloc(sizeof(int));
    *a = 2;
    free(a);
    *a = 1;
    // Tentativa de escrever na variável que foi liberada
}

void vazamentoDeMemoria(){
    int *v = (int *) malloc(sizeof(int));
    int a;
    v = &a;
    // O programador perdeu o acesso ao malloc
}
