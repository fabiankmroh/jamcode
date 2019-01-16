#include <stdio.h>

int triangle[500][500];
int maxscore[500][500];
int lim;

int score(int cX, int cY){
    int i, j;
    int c = maxscore[cX][cY];

    if(cX == lim) return 0;

    if(maxscore[cX+1][cY] < c + triangle[cX+1][cY]){
        printf("CASE #1\n");
        maxscore[cX+1][cY] = c + triangle[cX+1][cY];
        score(cX+1, cY);

        printf("\n\nMAXSCORE\n");
        for(i = 0; i <= lim; i++){
            for(j = 0; j < i; j++){
                printf("%d ", maxscore[i][j]);
            }
            printf("\n");
        }
    }
    if(maxscore[cX+1][cY+1] < c + triangle[cX+1][cY+1]){
        printf("CASE #2\n");
        maxscore[cX+1][cY+1] = c + triangle[cX+1][cY+1];
        score(cX+1, cY+1);

        printf("\n\nMAXSCORE\n");
        for(i = 0; i <= lim; i++){
            for(j = 0; j < i; j++){
                printf("%d ", maxscore[i][j]);
            }
            printf("\n");
        }
    }

}

int main(void){
    int cnt;
    int max = 0;
    int i, j, m;
    
    scanf("%d", &lim);

    for(i = 0; i <= lim; i++){
        for(j = 0; j < i; j++){
            scanf("%d", &triangle[i][j]);
        }
    }

    maxscore[0][0] = triangle[0][0];

    score(0,0);

    for(cnt = 0; cnt < lim; cnt++){
        m = maxscore[lim-1][cnt];
        if(max < m){
            max = m;
        }
    }

    printf("%d\n", m);
}