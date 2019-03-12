#include <stdio.h>

int max = 0;
int pricelist[10000];
int lim, i;

void card(int total,int remain){
    if(remain == 0){
        if(total > max){
            max = total;
        }
        
        return;
    }
    
    for(i = 1; i < remain; i++){
        card(total+pricelist[remain-i], remain-i);
    }
}

int main(void){
    scanf("%d", &lim);
    
    for(i = 1; i <= lim; i++){
        scanf("%d", &pricelist[i]);
    }

    card(0, lim);

    printf("%d\n", max);
}