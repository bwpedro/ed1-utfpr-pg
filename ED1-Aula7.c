#include <stdio.h>
#include <stdlib.h>


// Struct auto-referenciada
typedef struct T{
    int x;
    struct T *prox;
}Tipo;

int main(){
    Tipo *a;
    a = malloc(sizeof(Tipo));
    
    // Verifica se o malloc não é nulo
    if (a == NULL){
        printf("Não há espaço para o malloc\n");
        //return;
    }
    a->x = 2; // Atribui o campo x da struct com 2
    a->prox = NULL; // Atribui o campo prox da struct com NULL
    Tipo b = *a; // Faz uma cópia da struct do malloc e armazena em b
    Tipo **p = &(a->prox); // Atribui a p o endereço do campo prox da struct
    *p = &b; // Atribui o campo prox da struct o endereço de b
}