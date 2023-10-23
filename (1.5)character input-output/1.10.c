#include <stdio.h>

int main(void){
    int c, b;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            putchar('\\');
            putchar('t');
        }
        if(c == '\b'){
            putchar('\\');
            putchar('b');
        }
        if(c == '\\'){
            putchar('\\');
            putchar('\\');
        }
        if(c!='\t' && c!='\b' && c!='\\') putchar(c);
    }

    return 0;
}