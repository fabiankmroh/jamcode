#include <stdio.h>

int lim;
int coinT[1000];
int min = 100;
int set, i;

int coin(int val, int num){
    if(val == 0){
        if(num < min){
            min = num;
        }
        return 0;
    }
    else{
        for(i = 0; i < lim; i++){
            coin(val-coinT[i], num+1);
        }
    }
}

int main(void){
    scanf("%d %d", &lim, &set);
    
    for(i = 0; i < lim; i++){
        scanf("%d", &coinT[i]);
    }

    coin(set, 0);

    printf("%d\n", min);
}