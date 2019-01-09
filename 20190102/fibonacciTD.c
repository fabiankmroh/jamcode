#include <stdio.h>

int fib[100];

int f(int n){
    if(fib[n] != 0){
        return fib[n];
    }

    fib[n] = f(n-1) + f(n-2);

    return fib[n];
}

int main(void){
    fib[1] = 1;
    fib[2] = 1;
    printf("%d\n", f(7));
}