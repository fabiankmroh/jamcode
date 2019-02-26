#include <stdio.h>

int num[20];

int add(int n){
    if(num[n] > 0){
        return num[n];
    }
    if(n < 1){
        return 0;
    } 
    else if(n == 1){
        return 1;
    }
    
    num[n] = add(n-1) + add(n-2) + add(n-3);
    return num[n];
}

int main(void){
    int n, k;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        printf("%d\n", add(k));     
    }
}