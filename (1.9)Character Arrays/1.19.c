#include <stdio.h>
#define MAXLINE 1000

int getline(char line[]);
char* reverse(char line[], char line_r[], int len);

int main(){
    int len;
    char line[MAXLINE];
    char line_r[MAXLINE];

    while((len = getline(line))!=EOF){
        printf("%s\n", reverse(line, line_r, len));
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

char* reverse(char line[], char line_r[], int len){
    int j = 0;
    for(int i = len-1; i>=0; i--){
        line_r[j] = line[i];
        j++;
    }
    line_r[j] = '\0'; 
    return line_r;
}