#include <stdio.h>

int main(void){
    int space, current;
    
    while((current = getchar()) != '\n'){
        //space = (current == ' ')? ++space : 0
        if(current == ' '){
            ++space;
        }else{space = 0;}
        if(space<2) putchar(current);
    }

    return 0;
}