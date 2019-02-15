#include <stdio.h>

int nCm(int n, int m){
    if(m == n) return 1;
    if(m == 1) return n;
    return nCm(n-1, m) + nCm(n-1, m-1);
}

int main(void){
    int n, m;
    int t, i;

    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d %d", &m, &n);
        printf("%d\n", nCm(n, m));
    }
}