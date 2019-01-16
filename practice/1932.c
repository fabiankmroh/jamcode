#include <stdio.h>

int max = 0;
int triangle[500][500];
int scorechart[500][500];
int x, n;

void add(int cX, int cY, int score){
    score += triangle[cX][cY];

    if(cX == x){
        if(score > max) max = score;
        score = 0;
        cX = 0;
        cY = 0;
        return;
    }

    if(scorechart[cX][cY] > 0){
        if(score+scorechart[cX][cY]>max) max = score+scorechart[cX][cY];
    }
    else {
        //scorechart[cX][cY] = score;
        add(cX+1, cY+1, score);
        add(cX+1, cY, score);
    }
}

int main(void){
    int i, j;
    scanf("%d", &x);
    
    for(i = 0; i <= x; i++){
        for(j = 0; j < i; j++){
            scanf("%d", &triangle[i][j]);
        }
    }

    n = 0;
    add(0, 0, 0);
    printf("%d\n", max);
}