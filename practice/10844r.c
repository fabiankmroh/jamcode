#include <stdio.h>

int lim;
int cnt = 0;

void num(int len, int n){
    if(len == lim){
        cnt++;
        return; 
    }

    if(n == 0){
        num(len+1, n+1);
    }
    else if(n == 9){
        num(len+1, n-1);
    }
    else{
        num(len+1, n+1);
        num(len+1, n-1);
    }

    return;
}

int main(void){
    int i;
    scanf("%d", &lim);

    for(i = 1; i <= 9; i++){
        num(1, i);
    }

    printf("%d\n", cnt % 1000000000);
}