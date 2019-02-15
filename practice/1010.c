#include <stdio.h>

long long int factorial(int num){
    int i;
    long long int ans = 1;

    for(i = 1; i <= num; i++){
        ans *= i;
    }

    return ans;
}

int main(void){
    int t;
    int n;
    int m;
    int i;
    long long int tmp;

    scanf("%d", &t);
    
    /*for(i = 1; i <= t; i++){
        scanf("%d %d", &m, &n);

        tmp = factorial(n) / (factorial(n-m) * factorial(m));

        printf("%lld\n", tmp);
    }*/

    printf("%lld\n", factorial(t));
}