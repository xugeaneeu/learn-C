#include <stdio.h>

int main(void){
    int prev, curr;
    while((curr = getchar()) != EOF){
        if((prev == ' ' || prev == '\t') && !(curr == ' ' || curr == '\t')){
            putchar('\n');
            putchar(curr);
        }else if(!(curr == ' ' || curr == '\t')) putchar(curr);

        prev = curr;
    }

    return 0;
}