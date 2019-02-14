#include <stdio.h>

int factC(int n){
    int i;
    int cnt = 0;

    for(i = 1; i <= n; i++){
        if(n % i == 0) cnt++;
    }

    return cnt;
}

int main(void){
    int t, n;
    int i, j;
    int ans;
    
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        ans = 0;
        scanf("%d", &n);
        for(j = 1; j <= n; j++){
            if(factC(j) % 2 == 1) ans++;
        }
        printf("%d\n", ans);
    }
}
