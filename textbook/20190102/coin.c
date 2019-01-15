#include <stdio.h>

int cnt;
int i;

/* Input */
int coinType[10];
int coinLimit;
int assignValue;

void coin(int value){
    if(value == 0){
        cnt++;
        return;
    }
    else if(value < 0){
        return;
    }
    else{
        for(i = 0; i < coinLimit; i++){
            coin(value-coinType[i]);
        }
    }
}

int main(void){
    scanf("%d %d", &coinLimit, &assignValue);
    for(i = 0; i < coinLimit; i++){
        scanf("%d", &coinType[i]);
    }

    coin(assignValue);

    printf("%d\n", cnt);
}