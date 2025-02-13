#include <stdio.h>

int main(){
    int a = 40;
    int *pA = &a;

    printf("%p\n", pA); //kiirja az addresst
    printf("%d\n", *pA); // dereference visszadja a valuejat a pointernek
    *pA = 122; // a *pA address értéke 122 lesz
    printf("%d", *pA);
    return 0;
}