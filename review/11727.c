#include <stdio.h>

int main(void){
    int arr[1000];
    int lim;
    int i;

    scanf("%d", &lim);

    arr[0] = 1;
    arr[1] = 1;

    for(i = 2; i <= lim; i++){
        arr[i] = 2*arr[i-2] + arr[i-1];
        arr[i] %= 10007;
    }

    printf("%d\n", arr[lim]);
}