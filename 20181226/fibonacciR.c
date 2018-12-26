#include <stdio.h>

int fibonacci(int fibN){
    if(fibN == 0){
        return 0;
    }
    else if(fibN == 1){
        return 1;
    }
    else{
        return fibonacci(fibN-1) + fibonacci(fibN-2);
    }
}

int main(void){
    int input;
    scanf("%d", &input);

    printf("%d\n", fibonacci(input));
}