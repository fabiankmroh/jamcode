// FAILED
#include <stdio.h>

int cost[3][1500];
int ans[3][1500];
int lim;
int i, j;
int final = 999;

int main(void){
    scanf("%d", &lim);
    for(i = 0; i < lim; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &cost[j][i]);
        }
    }

    for(i = lim-2; i >= 0; i--){
        for(j = 0; j < 3; j++){
            if(j == 0){
                if(cost[1][i+1] < cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[1][i+1];
                }
                else if(cost[1][i+1] > cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[2][i+1];
                }
            }
            else if(j == 1){
                if(cost[0][i+1] < cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[0][i+1];
                }
                else if(cost[0][i+1] > cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[2][i+1];
                }
            }
            else if(j == 2){
                if(cost[0][i+1] < cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[0][i+1];
                }
                else if(cost[0][i+1] > cost[2][i+1]){
                    ans[j][i] = cost[j][i] + cost[2][i+1];
                }
            }
            
            printf("%d %d\n", i, j);
            for(i = 0; i < lim; i++){
                for(j = 0; j < 3; j++){
                    printf("%d ", ans[i][j]);
                }
                printf("\n");
            }
        }
    }

    for(i = 0; i < 3; i++){
        if(ans[i][0] < final) final = ans[i][0];
    }

    printf("%d\n", final);
}