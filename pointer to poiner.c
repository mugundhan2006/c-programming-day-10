#include <stdio.h>

int main() {
    int a = 1;

    int *p1;
    int **p2;
    int ***p3;
    int ****p4;

    p2 = &p1;   
    p1 = &a;    
    p3 = &p2;    
    p4 = &p3;   

    printf("a      = %d\n", a);
    printf("*p1    = %d\n", *p1);
    printf("**p2   = %d\n", **p2);
    printf("***p3  = %d\n", ***p3);
    printf("****p4 = %d\n", ****p4);

    return 0;
}
