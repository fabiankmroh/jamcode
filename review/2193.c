#include <stdio.h>

int lim;
int total;

void pinary(int n, int digit){
    if(digit+1 == lim){
        total++;
        return;
    }
    
    if(n == 0){
        pinary(0, digit+1);
        pinary(1, digit+1);
    }
    else if(n == 1){
        pinary(0, digit+1);
    }
}

int main(void){
    scanf("%d", &lim);

    pinary(1, 0);

    printf("%d\n", total);
}