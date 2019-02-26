#include <stdio.h>

int add(int n){
    if(n < 0){
        return 0;
    } 
    else if(n == 0){
        return 1;
    }
    
    return add(n-1) + add(n-2) + add(n-3);
}

int main(void){
    int n, k;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        printf("%d\n", add(k));     
    }
}