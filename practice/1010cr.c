#include <stdio.h>

int nCm(int n, int m){
    if(n == m) return 1;
    if(m == 1) return n;
    return nCm(n-1, m) + nCm(n-1, m-1);
}

int main(void){
    int t;
    int i;
    int m, n;

    scanf("%d", &t);
    for(i = 0; i < t; i++){
        scanf("%d %d", &m, &n);

        printf("%d\n", nCm(n,m));
    }

    return 0;
}