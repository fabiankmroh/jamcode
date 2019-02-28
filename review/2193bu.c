#include <stdio.h>

int lim;
long long int storage[100];

int main(void){
    int i;
    scanf("%d", &lim);

    storage[1] = 1;
    storage[2] = 1;
    
    for(i = 3; i <= lim; i++){
        storage[i] = storage[i-1] + storage[i-2];
    }

    printf("%lld\n", storage[lim]);
}