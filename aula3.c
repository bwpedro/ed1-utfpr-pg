#include <stdio.h>

void expressaoLogica();
void ponteiroDePonteiro();
void passagemValor();
void pValor();
void passagemReferencia();
void pReferencia();

int main(){
    passagemReferencia();
}

void expressaoLogica(){
    int a;
    int *p = &a;
    if (p) printf("oi");
    // Em *p temos o endereço de a, portanto não é nulo, logo a expressão é verdadeira
}

void ponteiroDePonteiro(){
    char a = 'b';
    char *p = &a;
    char **p2 = &p;
    // p2 é um ponteiro de ponteiro para a
}

void passagemValor(){
    int a = 2;
    pValor(a); // Copia o valor
}

void pValor(int a){
    a = 3;
}

void passagemReferencia(){
    int a = 2;
    pReferencia(&a); // Troca o valor
    printf("a = %d\n",a);
}

void pReferencia(int *a){
    *a = 3;
}