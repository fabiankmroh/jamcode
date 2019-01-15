#include <stdio.h>

#define RED    0
#define GREEN  1
#define BLUE   2

int minT = 9999;
int houseCnt;
int i, j;

int cost[1000][3];

int paint(int n, int pC, int total){
    for(i = 1; i <= 3; i++){
        if(i == pC){
            continue;
        }   

        int a = total+cost[n][pC];

        if(n == houseCnt){
            if(a < minT){
                minT = a;
            }

            return 0;
        }

        return paint(n+1, i, a);
    }
}

int main(void){
    scanf("%d", &houseCnt);

    for(i = 0; i < houseCnt; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &cost[i][j]);
        }
    }

    printf("%d\n", minT);
}