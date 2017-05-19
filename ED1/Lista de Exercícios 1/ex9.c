#include <stdio.h>
#include <stdlib.h>

double* max(double *a,int size);

int main(){
    int size = 4;
    double vetor[4] = {10, 4, 13, 8}, *pVetor;
    pVetor = max(vetor,size);
}

double* max(double *a,int size){
    double maiorValor = 0;
    double *pMV;
    pMV = &maiorValor;
    for(int i = 0;i < size;i++){
        if (a[i] > maiorValor){
            pMV = &maiorValor;
        }
    }
    return pMV;
}