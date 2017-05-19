#include <stdio.h>
#include <stdlib.h>

char *aloca(int n);
void desaloca(char **p);

int main(){
    int n = 2;
    char *p = aloca(n);
    if (p == NULL){
        printf("problema de alocação");
    } else {
        for(int i = 0;i<n;i++){
            *(p+i) = 0;
            printf("Posição %d: %d\n",i,*p);
        }
    }
}

char *aloca(int n){
    char *p1;
    p1 = malloc(sizeof(char)*n);
    return p1;
}

void desaloca(char **p){
    free(*p);
    p = NULL;
}