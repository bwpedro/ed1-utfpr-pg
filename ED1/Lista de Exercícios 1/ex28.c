#include <stdio.h>
#include <stdlib.h>

int main(){
     short int *p=NULL;
     *p=0;
     printf("%p %d\n",p,*p);
     return 0;
}