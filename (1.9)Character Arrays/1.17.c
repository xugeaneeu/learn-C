#include <stdio.h>
#define MAXLINE 1000

int getline(char line[]);

int main(){
    int len = 0;
    int max = 0;
    
    char line[MAXLINE];

    while((len = getline(line))>0){
        if(len-1>5){
            printf("%s\n", line);
        }
    }

    return 0;
}

int getline(char line[]){
    int c, i;
    for(i = 0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n' ; ++i){
        line[i] = c;
    }

    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}