#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char nome[10];
    int periodo;
    int ra;
    int idade;
};
typedef struct aluno aluno;

int main(){
    aluno pedro, *p;
    p = &pedro;

    aluno b;

    strcpy(pedro.nome,"Pedro"); // pedro.nome = "Pedro"; ou p->nome = "Pedro";

    p->idade = 20; // == pedro.idade
    b.ra = 1839250;
    p->ra = 12; // pedro.ra
    pedro.periodo = 3; // == p->periodo

    printf("%d\n",p->ra);
    printf("%d\n",pedro.ra);
    printf("%d\n",b.ra);
}
