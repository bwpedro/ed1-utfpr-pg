#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);

int main(){
    int a = 2;
    int b = 3;
    troca(&a,&b);
    printf("%d\n%d\n",a,b);
}

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}