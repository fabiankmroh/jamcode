#include <stdio.h>

int cnt;
int lim;

int num(int prev, int digit){
    if(digit == lim){
        cnt++;
    }
    else{
        if(prev == 0){
            num(prev+1, digit+1);
        }
        if(prev == 9){
            num(prev-1, digit+1);
        }
        else{
            num(prev-1, digit+1);
            num(prev+1, digit+1);
        }
    }
}

int main(void){
    int i;
    scanf("%d", &lim);

    for(i = 1; i < 10; i++){
        num(i, 1);
    }

    printf("%d\n", cnt);
}