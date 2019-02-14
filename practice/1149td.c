#include <stdio.h>

int tri[1000][3];
int accu[1000][3];
int i, j;
int a, b;
int lim;
int ans = 99999;

int main(void){
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    if(lim == 1){
        for(i = 0; i < 3; i++){
            if(tri[0][i] < ans) ans = tri[lim-1][i];
        }

        printf("%d\n", ans);

        return 0;
    }

    for(i = 0; i < 3; i++){
        accu[0][i] = tri[0][i];
    }

    for(i = 1; i < lim; i++){
        for(j = 0; j < 3; j++){
            if(j == 0){
                a = accu[i-1][1];
                b = accu[i-1][2];
            }
            else if(j == 1){
                a = accu[i-1][0];
                b = accu[i-1][2];
            }
            else if(j == 2){
                a = accu[i-1][0];
                b = accu[i-1][1];
            }

            if(a < b){
                accu[i][j] = tri[i][j] + a;
            }
            else{
                accu[i][j] = tri[i][j] + b;
            }
        }
    }

    for(i = 0; i < 3; i++){
        if(accu[lim-1][i] < ans) ans = accu[lim-1][i];
    }

    printf("%d\n", ans);
}