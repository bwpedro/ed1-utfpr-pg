#include <stdio.h>
#include <stdlib.h>

struct TipoX{
    int campo1,campo2;
    struct TipoX *campo3;
};
typedef struct TipoX TipoX;

int main(){
     int b = 2;
     TipoX *x = (TipoX *) malloc(sizeof(TipoX));
     int *a = x->campo1 = &b;
     x->campo2 = &a;
     TipoX ***x2 = x->campo3 = (TipoX ***) malloc(sizeof(TipoX **));
}