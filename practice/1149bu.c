#include <stdio.h>

int accu[1000][3];
int tri[1000][3];
int lim;
int i, j;
int a, b;

int main(void){
    int ans = 99999;
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    if(lim == 1){
        for(i = 0; i < 3; i++){
            if(tri[0][i] < ans){
                ans = tri[0][i];
            }
        }

        printf("%d\n", ans);
        return 0;
    }

    for(i = 0; i < 3; i++){
        accu[lim-1][i] = tri[lim-1][i];
    }

    for(i = lim-2; i >= 0; i--){
        for(j = 0; j < 3; j++){
            if(j == 0){
                a = accu[i+1][1];
                b = accu[i+1][2];
            }
            else if(j == 1){
                a = accu[i+1][0];
                b = accu[i+1][2];
            }
            else if(j == 2){
                a = accu[i+1][0];
                b = accu[i+1][1];
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
        if(accu[0][i] < ans){
            ans = accu[0][i];
        }
    }

    printf("%d\n", ans);
}