#include <stdio.h>
#include <stdlib.h>

 void alocarDinamicamente();
 void liberarMemoria();

int main(){

}

void alocarDinamicamente(){
    int *a;
    a = (int *) malloc(sizeof(int));
    *a = 2;
}

 void liberarMemoria(){
    int *a;
    a = (int *) malloc(sizeof(int));
    *a = 2;
    free(a); // libera região
    a = NULL; // evita problema futuros
 }
