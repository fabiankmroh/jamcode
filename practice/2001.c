#include <stdio.h>

// LIS algorithm

int total = 0;

void subtract(int n){
    if(n < 0){
        return;
    }
    if(n == 1){
        total++;
        return;
    }
    else{
        subtract(n-1);
        subtract(n-2);
        subtract(n-3);
    }
}

int main(void){
    int input;
    int testcase;
    int i;

    scanf("%d", &testcase);
    
    for(i = 0; i < testcase; i++){
        scanf("%d", &input);
        subtract(input);
        printf("%d\n", total);
    }

    return 0;
}