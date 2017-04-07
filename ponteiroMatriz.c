#include <stdio.h>
#include <stdlib.h>

int main(){
    char matriz[2][2];
    char *p = matriz;

    // ATRIBUINDO VALORES PARA A MATRIZ
    *p = 'a'; // matriz[0][0] = 'a'; == p[0] = 'a';
    *(p+1) = 'b'; // matriz[0][1] = 'b'; == p[1] = 'b';
    *(p+2) = 'c'; // matriz[1][0] = 'c'; == p[2] = 'c';
    *(p+3) = 'd'; // matriz[1][1] = 'd'; == p[3] = 'd';

    // PRINTANDO A MATRIZ PELA MATRIZ
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%c\n",matriz[i][j]);
        }
    }

    printf("\n");

    // PRINTANDO A MATRIZ POR SEUS PONTEIROS
    for(int i=0;i<4;i++){
        printf("%c\n",*(p+i));
    }
}