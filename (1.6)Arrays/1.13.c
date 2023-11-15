#include <stdio.h>

int main(void){
    int cnt = 0;
    char c;
    int length[30] = {0};
    while((c = getchar())!='.'){
        cnt++;
        if(c == ' ' || c == '\n' || c == '\t'){
            length[cnt-1]++;
            cnt = 0;
        }
    }
    for(int i = 1; i<30; i++){
        int hui = length[i];
        if(hui!=0){
            printf("%d\t", i);
            for(int j = 0; j<hui; j++){
                printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}