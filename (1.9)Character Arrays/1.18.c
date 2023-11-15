#include <stdio.h>

#define MAXARRAY 1000

int getline(char line[]);
int format(char line[], char formated[], int len);

int main(){
    int len = 0;
    char line[MAXARRAY];
    char formated[MAXARRAY];

    while((len = getline(line)) != EOF){
        if(format(line, formated, len)){
            printf("%s", formated);
        }else{printf("empty string\n");}
    }

    return 0;
}

int getline(char line[]){
    int c, i;
    for(i = 0; i < MAXARRAY-1 && (c = getchar()) != EOF && c != '\n' ; ++i){
        line[i] = c;
    }

    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}

int format(char line[], char formated[], int len){
    int i = 0, j = 0;
    char c;

    while(i<=len){
        c = line[i];
        char prev;
        if(!((prev == ' ' || prev == '\t') && c == prev)){
            formated[j] = c;
            ++j;
        }
        prev = c;
        ++i;
    }

    return j>2;

}