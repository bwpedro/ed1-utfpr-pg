#include <stdio.h>
#include <stdlib.h>

int main() {
       int a,b,*p1,*p2;
       a = 4;
       b = 3;
       p1 = &a;
       p2 = p1; // p2 = &a;

       *p2 = *p1 + 3; // 4 = 4 + 3; == a = 7;
       b = b * (*p1); // 3 = 3 * 7; == b = 21;
       *p2 = *p2 + 1;//(*p2)++; == a = 8;
       p1 = &b; 
       printf("%d %d\n", *p1, *p2);
       printf("%d %d\n", a, b);
       return 0;
}
