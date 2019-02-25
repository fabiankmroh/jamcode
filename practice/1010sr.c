#include <stdio.h>

int main(void){
    int t;
    int n, m;
    int i, j;
    int ans = 1;

    scanf("%d", &t);
    
    for(j = 0; j < t; j++){
        scanf("%d %d", &m, &n);
        for(i = n; i > n-m; i--){
            ans *= i;
        }

        for(i = 1; i <= m; i++){
            ans /= i;
        }

        printf("%d\n", ans);
    }
}