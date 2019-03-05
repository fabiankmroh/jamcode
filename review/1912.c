#include <stdio.h>

int main(void){
    int array[100000];
    int max[10000];
    int a;
    int i;
    int lim;

    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        scanf("%d", &array[i]);
    }

    max[0] = array[0];
    for(i = 1; i < lim; i++){
        a = array[i] + max[i-1];

        if(a < array[i]){
            max[i] = array[i];
        }
        else{
            max[i] = a;
        }
    }

    a = -9999;
    for(i = 0; i < lim; i++){
        if(max[i] > a) a = max[i];
    }

    printf("%d\n", a);
}