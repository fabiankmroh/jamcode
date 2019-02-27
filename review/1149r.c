#include <stdio.h>

int N;
int ans = 9999;
int color[3][1500];

void house(int sum, int n, int rgb){
    if(n == N-1){
        if(sum < ans) ans = sum;
        return;
    }

    else{
        if(rgb == 0){
            house(sum + color[1][n+1], n+1, 1);
            house(sum + color[2][n+1], n+1, 2);
        }
        if(rgb == 1){
            house(sum + color[0][n+1], n+1, 0);
            house(sum + color[2][n+1], n+1, 2);
        }
        if(rgb == 2){
            house(sum + color[0][n+1], n+1, 0);
            house(sum + color[1][n+1], n+1, 1);
        }
    }
}

int main(void){
    int i, j;
    
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &color[j][i]);
        }
    }

    house(color[0][0], 0, 0);
    house(color[1][0], 0, 1);
    house(color[2][0], 0, 2);

    printf("%d\n", ans);
}