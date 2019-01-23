#include <stdio.h>
#include <math.h>

#define TRUE    1
#define FALSE   0

int n;

int digit(int i){
    int j, a, prev, now;

    prev = i % 10;
    
    for(int cnt = 0; cnt <= n; cnt++){
        now = i % 10;
        printf("%d: %d\n", i, now);
        a = now - prev;
        if(a != 1 && a != -1){
            printf("FALSE\n");
            return FALSE;
        }

        prev = now;
        i /= 10;
    }

    return TRUE;
}

int main(void){
    int i;
    int cnt = 0;

    scanf("%d", &n);

    if(n == 1){
        printf("9\n");
        return 0;
    }

    for(i = pow(10, n-1); i < pow(10, n); i++){        
        if(digit(i) == TRUE ) cnt++;
    }

    printf("%d\n", cnt % 1000000000);
}