#include <stdio.h>
#include <stdlib.h>

int *uniao(int *v1, int n1, int *v2, int n2);

int main(){
    int n1,n2;

    printf("Quantos elementos deseja no vetor 1?\n");
    scanf("%d",&n1);
    int v1[n1];
    for(int i = 0; i<n1; i++){
        printf("Insira um valor para a posição %d: ",i+1);
        scanf("%d",&v1[i]);
    }

    printf("Quantos elementos deseja no vetor 2?\n");
    scanf("%d",&n2);
    int v2[n2];
    for(int i = 0; i<n2; i++){
        printf("Insira um valor para a posição %d: ",i+1);
        scanf("%d",&v2[i]);
    }

    int *ponteiro = uniao(v1,n1,v2,n2);

    for(int i=0;i<(n1+n2);i++){
        printf("%d\n",*(ponteiro+i));
    }
}

int *uniao(int *v1, int n1, int *v2, int n2){
    int *vetor = malloc(sizeof(int)*(n1+n2));

    for(int i=0;i<n1;i++){
        vetor[i] = v1[i];
    }
    for(int i=0;i<=n2;i++){
        vetor[i+4] = v2[i];
    }
    return vetor;
}