#include <stdio.h>

int main(void){
    int num[20];
    int i, j;
    int t;
    int lim;

    scanf("%d", &t);

    num[1] = 1;
    num[2] = 2;
    num[3] = 4;

    for(i = 0; i < t; i++){
        scanf("%d", &lim);

        for(j = 4; j <= lim; j++){
            num[j] = num[j-1] + num[j-2] + num[j-3];
        }

        printf("%d\n", num[lim]);
    }
}