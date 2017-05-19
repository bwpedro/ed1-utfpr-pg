#include <stdio.h>

void troca(int *a, int *b);

int main(){
    int a = 2;
    int b = 3;
    printf("ANTES\na = %d\nb = %d\n",a,b);
    troca(&a,&b);
    printf("DEPOIS\na = %d\nb = %d\n",a,b);
}

void troca(int *a, int*b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
