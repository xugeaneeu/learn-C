#include <stdio.h>

int main(void){
    int space=0, nl=0, tabs=0, c;

    while((c = getchar())!=EOF){
        if(c == '\n') ++nl;
        if(c == '\t') ++tabs;
        if(c == ' ') ++space;
    }
    
    printf("%d\n%d\n%d\n", space, tabs, nl);

    return 0;
}