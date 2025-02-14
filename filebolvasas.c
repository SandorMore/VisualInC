#include <stdio.h>

int main()
{
    FILE *pF = fopen("pizzak.txt", "r");
    char c;
    if(pF == NULL){
        printf("Nem lehetett megnyitni a fájlt.");
    }
    else{
        while((c = fgetc(pF)) != EOF){
            putchar(c);
        }
        fclose(pF);
    }

    return 0;
}