#include <stdio.h>

int main(){
    int a = 1025;
    int *pA = &a;
    printf("The size of datatype int is: %d", sizeof(int));
    printf("\nAddress of a is: %p, and value of a is %d", pA, *pA);
    printf("\nAddress of a is: %p, and value of a is %d", pA + 1, *(pA + 1));
    char *p0;
    p0 = (char*)pA;
    printf("\nThe size of datatype char is: %d", sizeof(char));
    printf("\nAddress of a is: %p, and value of a is %d", p0, *p0);
    return 0;
}