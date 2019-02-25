#include <stdio.h>

long long int list[70];

long long int koong(int n){
    if(list[n] > 0) return list[n];
    
    list[n] = koong(n-1) + koong(n-2) + koong(n-3) + koong(n-4);
    return list[n];
}

int main(void){
    int t;
    int i;
    int n;

    list[0] = 1;
    list[1] = 1;
    list[2] = 2;
    list[3] = 4;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d", &n);

        printf("%lld\n", koong(n));
    }
}