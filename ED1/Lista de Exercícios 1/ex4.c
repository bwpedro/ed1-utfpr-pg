#include <stdio.h>
#include <stdlib.h>

struct MeuTipo{
    int tipoA;
    char tipoB;
};

typedef struct MeuTipo meutipo;

int main(){
    meutipo *var;
    var = (meutipo*) malloc(sizeof(meutipo));
    meutipo var2 = *var; // meutipo var2 = (meutipo*) malloc(sizeof(meutipo));
    var->tipoA = 1;
    var->tipoB = 'c';
    var2.tipoB = 'b';

    printf("%c\n",var->tipoB);
    printf("%c\n",var2.tipoB);

    return 0;
}