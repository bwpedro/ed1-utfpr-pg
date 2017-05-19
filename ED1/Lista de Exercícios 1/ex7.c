#include <stdio.h>
#include <stdlib.h>

int main() {
        char vetor[3] = {'A','B','C'};
        char *j = &vetor[0];
        char aux;
        aux = vetor[0];
        printf("%c\n",aux);
        aux = *(vetor + 2);
        printf("%c\n",aux);
        aux = *(j + 1);
        printf("%c\n",aux);
        aux = *j;
        printf("%c\n",aux);
        j = vetor + 1;
        aux = *j;
        printf("%c\n",aux);
        aux = *(j + 1);
        printf("%c\n",aux);
        j = vetor;
        aux = *++j;
        printf("%c\n",aux);
        aux = ++*j;
        printf("%c\n",aux);
        aux = *j++;
        printf("%c\n",aux);
        aux = *j;
        printf("%c\n",aux);
        return 0;
}
