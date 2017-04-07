#include <stdio.h>
#include <stdlib.h>

void declaraPonteiro();
void retornaEndereco();
void inicializandoPonteiro();
void lerPonteiro();
void escreverPonteiro();

int main(){
    return 0;
}

void declaraPonteiro(){
    int *p;
}

void retornaEndereco(){
    int a;
    printf("%p\n",&a);
}

void inicializandoPonteiro(){
    int *p = NULL;
    // ou
    int a = 2;
    int *p1 = &a;
}

void lerPonteiro(){
    int a = 2;
    int *p = &a;
    printf("a = %d\n",*p);
}

void escreverPonteiro(){
    int a = 2;
    int *p = &a;
    *p = 3;
    printf("a = %d\n",a);
}