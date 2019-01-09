#include <stdio.h>
#define MAX 100000

int fibonacci[MAX];

int fibC(int fibN){
    if(fibonacci[fibN] == 0){
        fibonacci[fibN] = fibC(fibN-1) + fibC(fibN-2);
    }
    
    return fibonacci[fibN];
}

int main(void){
    int input;
    fibonacci[0] = 1;
    fibonacci[1] = 1;

    scanf("%d", &input);
    printf("%d\n", fibC(input-1));
}