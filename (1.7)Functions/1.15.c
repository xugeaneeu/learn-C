#include <stdio.h>

double translate(int degree);

int main(){
    for(int fahr = 300; fahr>=0; fahr = fahr - 20){
        printf("%3d\t%6.1f\n", fahr, translate(fahr));
    }

    return 0;
}

double translate(int degree){
    return (5.0/9.0)*(degree-32);
}