#include <stdio.h>

int main(void){
    int с;
    while ((с = getchar()) != EOF){
        putchar(с);
    }

    printf("%d", EOF);
}