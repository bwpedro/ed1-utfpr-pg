#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ex3();
void ex4();
void ex7();
void ex26();

int main(){
    ex7();
    return 0;
}

void ex3(){
    char frase1[50], frase2[50];
    int size, iguais;
    // printf("Digite uma frase: ");
    gets(frase1);
    // printf("Digite outra frase: ");
    gets(frase2);
    size = strlen(frase1);

    for(int i=0;i<size;i++){
        if (frase1[i] == frase2[i]){
            iguais = 1;
        } else {
            iguais = 0;
            break;
        }
    }

    if (iguais == 1){
        printf("V\n");
    } else {
        printf("F\n");
    }
}

void ex4(){
    char nome [30];
    char aux [5];
    int i = 0;
    // printf("Insira seu nome: ");
    gets(nome);
    while(i < 4){
        aux[i] = nome[i];
        i++;
    }
    printf("%s\n",aux);
}

void ex7(){
    int size, cont = 0;
    char frase[30];
    // printf("Insira a frase: ");
    gets(frase);
    size = strlen(frase);

    for(int i=0;i<size;i++){
        if(frase[i] == '1'){
            cont++;
        }
    }

    printf("Sua frase contém %d numeros 1's\n",cont);
}

void ex26(){
    char frase[100];
    int chave = 3, i = 0;

    // printf("Digite: ");
    gets(frase);

    while (frase[i] != '\0'){

        if (frase[i] == 32){
            frase[i] = 32;
        } else if (frase[i] + chave > 90){
            frase[i] = (frase[i] - 26) + chave;
        } else {
            frase[i] = frase[i] + chave;
        }
        i++;
    }
    printf("%s\n",frase);
}