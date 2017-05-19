#include <stdio.h>

int main(){
     int v[1] = {2};
     short int f[1]= {4};
     short int * pv = (short int *)v;
     int * pf = (int *)f;
     printf("%p, %p \n", pv, pf);
     printf("%p, %p \n", ++pv, pf++);
     printf("%p\n",pf);
     return 0;
}