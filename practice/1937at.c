#include <stdio.h>

int rect[1000][1000];
int lim;
int max = 0;

void squ(int x, int y, int len){
    // right
    if(x+1<lim && rect[x+1][y] > rect[x][y]){
        squ(x+1, y, len+1);
    }

    // down
    if(y+1<lim && rect[x][y+1] > rect[x][y]){
        squ(x, y+1, len+1);
    }
    
    // left
    if(x > 0 && rect[x-1][y] > rect[x][y]){
        squ(x+1, y, len+1);
    }

    // up
    if(y > 0 && rect[x][y-1] > rect[x][y]){
        squ(x, y-1, len+1);
    }

    if(len > max) max=len;
}

int main(void){
    int i, j;
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++){
            scanf("%d", &rect[i][j]);
        }
    }
    
    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++){
            squ(i,j,1);
        }
    }

    printf("%d\n", max);
}