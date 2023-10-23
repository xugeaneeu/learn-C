#include <stdio.h>

int main(void){
    float celsius, fahr;
    int lower, upper, step;
    
    printf("\t\b\bTable of temperature(c->f)\n\n");

    step = 20;
    lower = 0;
    upper = 300;

    celsius = lower;
    while(celsius<=upper){
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("\t%3.f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }

    return 0;
}