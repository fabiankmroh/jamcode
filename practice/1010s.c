#include <stdio.h>

int main(void){
    int n;
    int m;
    int i;
    long long int ans = 1;
    
    scanf("%d %d", &n, &m);

    for(i = n; i > n-m; i--){
        ans *= i;
    }

    for(i = 1; i <= m; i++){
        ans /= i;
    }

    printf("%lld\n", ans);
}