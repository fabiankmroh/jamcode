// Review
#include <stdio.h>

int cost[1500][3];
int ans[1500][3];
int lim;
int i, j;
int final = 1234567890;

int main(void){
    scanf("%d", &lim);
    for(i = 0; i < lim; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &cost[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        ans[lim-1][i] = cost[lim-1][i];
    }

    for(i = lim-2; i >= 0; i--){
        for(j = 0; j < 3; j++){
            if(j == 0){
                if(ans[i+1][1] < ans[i+1][2]) ans[i][j] = cost[i][j] + ans[i+1][1];
                else ans[i][j] = cost[i][j] + ans[i+1][2];
            }
            else if(j == 1){
                if(ans[i+1][0] < ans[i+1][2]) ans[i][j] = cost[i][j] + ans[i+1][0];
                else ans[i][j] = cost[i][j] + ans[i+1][2];
            }
            else if(j == 2){
                if(ans[i+1][0] < ans[i+1][1]) ans[i][j] = cost[i][j] + ans[i+1][0];
                else ans[i][j] = cost[i][j] + ans[i+1][1];
            }
        }
    }

    for(i = 0; i < 3; i++){
        if(ans[0][i] < final) final = ans[0][i];
    }

    printf("%d\n", final);
}