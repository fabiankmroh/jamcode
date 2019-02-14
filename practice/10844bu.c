#include <stdio.h>

int accu[100][9];
int lim;

int i, j;

int main(void){
    int ans = 32767;
    scanf("%d", &lim);

    for(i = 0; i < 9; i++){
        accu[lim-1][i] = 1;
    }

    for(i = lim-2; i >= 0; i--){
        for(j = 0; j < 9; j++){
            if(j == 0){
                accu[i][j] = accu[i+1][j+1] + 1;
            }
            else if(j == 9){
                accu[i][j] = accu[i+1][j-1] + 1;
            }
            else{
                accu[i][j] = accu[i+1][j-1] + accu[i+1][j+1] + 1;
            }
        }
    }

    for(i = 0; i < 9; i++){
        if(accu[0][i] < ans) ans = accu[0][i];
    }

    printf("%d\n", ans);
}