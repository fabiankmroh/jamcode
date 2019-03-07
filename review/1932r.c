// Bottom Up 
#include <stdio.h>

int main(void){
    int lim; 
    int tri[600][600];
    int accu[600][600];
    int i, j;
    int a, b;
    
    scanf("%d", &lim);
    for(i = 0; i < lim; i++){
        for(j = 0; j <= i; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    for(i = 0; i < lim; i++){
        accu[lim-1][i] = tri[lim-1][i];
    }

    for(i = lim-1; i >= 0; i--){
        for(j = 0; j <= i; j++){
            a = accu[i+1][j];
            b = accu[i+1][j+1];

            if(a > b){
                accu[i][j] = tri[i][j] + a;
            }
            else{
                accu[i][j] = tri[i][j] + b;
            }
        }
    }

    printf("%d\n", accu[0][0]);
    return 0;
}