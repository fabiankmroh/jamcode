#include <stdio.h>

int tri[500][500];
int accu[500][500];
int lim;
int i, j;
int ii, jj;
int a, b;

int main(void){    
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j <= i; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    for(i = 0; i < lim; i++){
        accu[lim-1][i] = tri[lim-1][i];
    }

    for(i = lim-2; i >= 0; i--){
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
}