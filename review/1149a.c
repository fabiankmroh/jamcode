#include <stdio.h>

int main(void){
    int lim;
    int tri[1500][3];
    int accu[1500][3];
    int i, j;
    int a, b;
    int final = 9999;

    scanf("%d", &lim);
    
    for(i = 0; i < lim; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    if(lim == 1){
        for(i = 0; i < 3; i++){
            if(final > tri[0][i]) final = tri[0][i];
        }

        printf("%d\n", final);
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
        if(accu[lim-1][i] < final) final = accu[lim-1][i];
    }

    printf("%d\n", final);
    return 0;
}