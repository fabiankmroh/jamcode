#include <stdio.h>

int numS[101];
int t, n, i, j, k;

int factor(int num){
    int faC = 0;
    if(numS[num] > 0) return numS[num];

    for(int cnt = 1; cnt <= num; cnt++){
        if(num % cnt == 0){
            if(numS[cnt] > 0){
                faC = numS[cnt] + 1;
                numS[num] = faC+1;
                break;
            }
            faC++;
        }
    }
    
    numS[num] = faC;
    return faC;
}

int main(void){
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d", &n);
        k = 0;

        for(j = 1; j <= n; j++){
            if(factor(j) % 2 == 1) k++;
        }
        printf("%d\n", k);
    }
}