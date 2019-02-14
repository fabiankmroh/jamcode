#include <stdio.h>

int rect[1000][1000];
int lim;
int max = 0;

int squ(int x, int y, int len){
    if(x+1<lim &&rect[x+1][y] > rect[x][y]){
        squ(x+1, y, len+1);
    }
    if(y+1<lim && rect[x][y+1] > rect[x][y]){
        squ(x, y+1, len+1);
    }
    if(x > 0 && rect[x-1][y] > rect[x][y]){
        squ(x+1, y, len+1);
    }
    if(y > 0 && rect[x][y-1] > rect[x][y]){
        squ(x, y+1, len+1);
    }
    else{
        // changing starting point
        if(x+1<lim && rect[x][y] > rect[x+1][y]){
            if(len > max) max = len;
            squ(x+1, y, 0);
        }
        if(y+1<lim && rect[x][y] > rect[x][y+1]){
            if(len > max) max = len;
            squ(x, y+1, 0);
        }
        if(x-1<lim && rect[x][y] < rect[x-1][y]){
            if(len > max) max = len;
            squ(x-1, y, 0);
        }
        if(y-1<lim && rect[x][y] > rect[x][y-1]){
            if(len > max) max = len;
            squ(x, y-1, 0);
        }
    }
}

int main(void){
    int n;
    int i, j;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &rect[i][j]);
        }
    }

    
}