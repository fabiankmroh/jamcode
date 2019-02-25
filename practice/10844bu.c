#include <stdio.h>

int accu[100][10];
int lim;

int i, j;

int main(void){
    int ans = 0;
    scanf("%d", &lim);

    if(lim == 1){
        printf("9");
        return 0;
    }

    for(i = 0; i < 10; i++){
        accu[lim-1][i] = 1;
    }

    for(i = lim-2; i >= 0; i--){
        for(j = 0; j < 10; j++){
            if(j == 0){
                accu[i][j] = accu[i][j] + accu[i+1][j+1] % 1000000000;
            }
            else if(j == 9){
                accu[i][j] = accu[i][j] + accu[i+1][j-1] % 1000000000;
            }
            else{
                accu[i][j] = accu[i][j] + accu[i+1][j-1] % 1000000000 + accu[i+1][j+1] % 1000000000;
            }
        }
    }

    for(i = 1; i < 10; i++){
        ans += accu[0][i] % 1000000000;
    }

    printf("%d\n", ans % 1000000000);
}