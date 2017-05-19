#include <stdio.h>

struct TipoX {
    int a;
    char b;
};
typedef struct TipoX tipox;

int main(){
    tipox *var1;
    tipox var2;
    var1 = &var2;
}