#include <stdio.h>

int coin[10];
int amount;
int cType;

int cnt;

int coinF(int total, int index){
    int i;
    if(total == 0){
        return 1;
    }
    else if(index == 0){
        if(total % coin[index] == 0) return 1;
        return 0;
    }

    int cnt = 0;
    int coinM = total / coin[index];
    for(i = 0; i <= coinM; i++){
        cnt += coinF(total - coin[index] * i, index-1);
    }

    return cnt;
}

int main(void){
    int i;
    scanf("%d %d", &amount, &cType);
    
    for(i = 0; i < cType; i++){
        scanf("%d", &coin[i]);
    }

    printf("%d\n", coinF(amount, cType-1));    
}