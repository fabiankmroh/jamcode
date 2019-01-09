#include <stdio.h>

int fib[100];
int f(int n){
    int i;
    if(n == 0){
        return 0;
    }

    for(i = 0; i <= n; i++){
        if(fib[n] == 0){
            fib[n] = f(n-1) + f(n-2);
        }
        else{
            continue;
        }
    }
    
    return fib[n];
}

int main(void){
    int n;

    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    scanf("%d", &n);

    f(n);
    printf("%d\n", fib[n]);
}