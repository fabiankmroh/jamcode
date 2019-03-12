#include <stdio.h>

int main(void){
    int i;
    int total = 0;
    int currentseat = 28;

    for(i = 1; i <= 32; i++){
        total += currentseat;
        currentseat += 3;
    }

    printf("%d\n", total);
}