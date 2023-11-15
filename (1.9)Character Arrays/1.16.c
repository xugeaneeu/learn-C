#include <stdio.h>
#define MAXLINE 1000

int getline(char line[]);
void copy(char from[], char to[]);

int main(){
    int len;
    int max = 0;

    char line[MAXLINE];
    char longest_line[MAXLINE];

    while((len = getline(line)) > 0){
        if(line[len-1] != '\n'){
            int c;
            while((c=getchar())!='\n' && c!=EOF) ++len;
            ++len;
        }
        
        if(len-1>max){
            max = len-1;
            copy(line, longest_line);
        }
    }

    if(max==0){
        printf("nothing");
        return 0;
    }

    printf("The longest line is %s\nLength = %d", longest_line, max);

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

void copy(char from[], char to[]){
    int i = 0;
    while((to[i] = from[i]) != '\0') ++i;
}