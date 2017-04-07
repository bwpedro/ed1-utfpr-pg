#include <stdio.h>
#include <stdlib.h>

void ex1();
void ex2();
void ex3();
void ex4();
int trocaEx4(int *a, int *b);
void ex5();
int retornaMaiorEx5(int *a, int *b);
void ex6();
int retornaSomaDobroEx6(int *a, int *b);
void ex7();
void somaDoisNumerosEx7(int *a, int*b);

int main(){
    
    // TROQUE O NUMERO DO EXERCICIO PARA O EXERCICIO REQUERIDO.

    ex1();
    
    return 0;
}

void ex1(){
    int inteiro = 1;
    float real = 1.5;
    char caracter = 'a';
    int *pInteiro;
    float *pReal;
    char *pCaracter;

    printf("ANTES: \n");
    
    printf("inteiro = %d\n",inteiro);
    printf("real = %.2f\n",real);
    printf("caracter = %c\n\n",caracter);

    pInteiro = &inteiro;
    pReal = &real;
    pCaracter = &caracter;

    *pInteiro = 2;
    *pReal = 2.5;
    *pCaracter = 'b';

    printf("DEPOIS: \n");

    printf("inteiro = %d\n",inteiro);
    printf("real = %.2f\n",real);
    printf("caracter = %c\n",caracter);
}

void ex2(){
    int inteiro1, inteiro2;

    printf("%p e %p\n",&inteiro1,&inteiro2);

    if (&inteiro1 > &inteiro2){
        printf("Inteiro1 tem o maior endereço\n");
    } else {
        printf("Inteiro2 tem o maior endereço\n");
    }
}

void ex3(){
    int inteiro1, inteiro2;

    scanf("%d",&inteiro1);
    scanf("%d",&inteiro2);

    if (&inteiro1 > &inteiro2){
        printf("Inteiro1 tem o maior endereço\n");
    } else {
        printf("Inteiro2 tem o maior endereço\n");
    }
}

void ex4(){
    int a = 2;
    int b = 3;
    printf("ANTES\na = %d\nb = %d\n",a,b);
    trocaEx4(&a,&b);
    printf("DEPOIS\na = %d\nb = %d\n",a,b);
}

int trocaEx4(int *a, int*b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return *a;
    return *b;
}

void ex5(){
    int a = 2;
    int b = 3;
    retornaMaiorEx5(&a,&b);
    printf("a = %d\nb = %d\n",a,b);
}

int retornaMaiorEx5(int *a, int *b){
    int aux;
    if(*a > *b){
        return *a;
        return *b;
    } else {
        aux = *a;
        *a = *b;
        *b = aux;
        return *a;
        return *b;
    }
}

void ex6(){
    int a = 2;
    int b = 3;
    retornaSomaDobroEx6(&a,&b);
    printf("Soma do dobro de A = %d\nSoma do dobro de B = %d\n",a,b);
}

int retornaSomaDobroEx6(int *a, int *b){
    *a = ((*a)*2)*2;
    *b = ((*b)*2)*2;
    
    return *a;
    return *b;
}

void ex7(){
    int a = 2;
    int b = 3;
    somaDoisNumerosEx7(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
}

void somaDoisNumerosEx7(int *a, int*b){
    *a = *a + *b;
}
