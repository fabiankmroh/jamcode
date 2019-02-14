#include <stdio.h>

int factor(int num){
    int i;
    int cnt = 0;

    for(i = 1; i <= num; i++){
        if(num % i == 0) cnt++;
    }

    return cnt;
}

int main(void){
    int t;
    int cnt = 0;
    int i, j, n;

    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d", &n);
        cnt = 0;

        for(j = 1; j <= n; j++){
            if(factor(j) % 2 == 1) cnt++;
        }

        printf("%d\n", cnt);
    }
}