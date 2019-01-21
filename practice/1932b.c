#include <stdio.h>

int triangle[501][501];
int maxscore[501][501];
int lim;

int score(int cX, int cY){
    int i, j;
    int c = maxscore[cX][cY];

    if(cX == lim) return 0;

    if(maxscore[cX+1][cY] < c + triangle[cX+1][cY]){
        maxscore[cX+1][cY] = c + triangle[cX+1][cY];
        score(cX+1, cY);
    }
    if(maxscore[cX+1][cY+1] < c + triangle[cX+1][cY+1]){
        maxscore[cX+1][cY+1] = c + triangle[cX+1][cY+1];
        score(cX+1, cY+1);
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
        m = maxscore[lim][cnt];
        if(max < m){
            max = m;
        }
    }

    printf("%d\n", max);
}