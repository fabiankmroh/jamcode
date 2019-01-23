#include <stdio.h>

int lim;
int sto[11][101];
int ans = 0;

int num(int n, int len){
    if(sto[n][len] > 0){
        return sto[n][len];
    }

    if(len == lim){
        sto[n][len] = 1;
        return 1;
    }

    if(n == 0){
        sto[n][len] = num(1, len+1)% 1000000000;
    }
    else if(n == 9){
        sto[n][len] = num(8, len+1)% 1000000000;
    }
    else{
        sto[n][len] =  num(n-1, len+1) % 1000000000+ num(n+1, len+1)% 1000000000;
    }

    return sto[n][len] % 1000000000;
}

int main(void){
    int i;

    scanf("%d", &lim);

    for(i = 1; i <= 9; i++){
        num(i, 1);
    }

    for(i = 1; i <= 9; i++){
        ans += sto[i][1];
    }

    printf("%d", ans% 1000000000);
}
