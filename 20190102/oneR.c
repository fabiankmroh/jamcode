#include <stdio.h>

int minC = 999;

void one(int n, int cnt){
    if(n == 1){
        if(cnt < minC) minC = cnt;
        return;
    }

    if(n % 3 == 0){
        one(n/3, cnt+1);
    }
    else if(n % 2 == 0){
        one(n/2, cnt+1);
    }
    one(n-1, cnt+1);
}

int main(void){
    one(10,0);
    printf("%d\n", minC);
}