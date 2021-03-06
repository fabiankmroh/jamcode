#include <stdio.h>

int ans[1000][1000];
int rect[1000][1000];
int tmp[1000][1000];
int startx, starty;
int lim;
int max = 0;

int squ(int x, int y, int len){
    ans[x][y] = len;

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


    else{
        // Changing Starting Point
        if(startx == lim-1 && starty == lim-1){
            return 0;
        }
        else if(startx == lim-1){
            startx = 0;
            starty++;
            ans[startx][starty] = 0;
            squ(startx, starty, 0);
        }
        else{
            startx++;
            ans[startx][starty] = 0;
            squ(startx, starty, 0);
        }
    }

}

int main(void){
    int i, j;
    int maxL = 0;
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++){
            scanf("%d", &rect[i][j]);
        }
    }

    startx = 0;
    starty = 0;

    squ(startx, starty, 0);

    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++){
            if(ans[i][j] > maxL) maxL = ans[i][j];
        }
    }

    printf("%d\n", maxL);
}