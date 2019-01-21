#include <stdio.h>

int triangle[600][600];
int maxscore[600][600];
int lim, current, next;
int i, j;

int max(void){
    int max = 0;

    for(i = 0; i < lim; i++){
        if(maxscore[lim][i] > max) max = maxscore[lim][i];
    }

    return max;
}

int score(void){
    int ii, jj;
    for(i = 0; i < lim; i++){
        for(j = 0; j <= i; j++){
            current = triangle[i][j];
            printf("i:%d j:%d\nCurrent: %d\n", i, j, current);

            if(maxscore[i+1][j] > 0){
                if(current + triangle[i+1][j] < maxscore[i+1][j]){
                    printf("CONTINUE1\n");
                    continue;
                }
            }

            if(maxscore[i+1][j+1] > 0){
                if(current + triangle[i+1][j+1] < maxscore[i+1][j]){
                    printf("CONTINUE2\n");
                    continue;
                }
            }

            printf("\n");
            maxscore[i+1][j] = current + triangle[i+1][j];
            printf("%d = %d + %d\n", maxscore[i+1][j], current, triangle[i+1][j]);
            maxscore[i+1][j+1] = current + triangle[i+1][j+1];
            printf("%d = %d + %d\n", maxscore[i+1][j+1], current, triangle[i+1][j+1]);
            printf("\n");

            printf("MAXSCORE:: \n");
            for(ii = 0; ii < lim; ii++){
                for(jj = 0; jj <= ii; jj++){
                    printf("%d ", maxscore[ii][jj]);
                }
                printf("\n");
            }
            printf("\n\n");
        }
    }

    max();
}

int main(void){
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j <= i; j++){
            scanf("%d", &triangle[i][j]);
        }
    }

    maxscore[0][0] = triangle[0][0];

    printf("%d\n", score());
}