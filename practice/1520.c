#include <stdio.h>

int map[500][500];
int add[500][500];
int i, j;
int usrx, usry;

int path(int x, int y, int total){
    add[x][y] += total;
    if(y == usry){
        if(x == usrx) return add[x][y];
        path(x+1, y-1, total+map[x][y]);
        return 0;
    }
    path(x+1, y-1, total+map[x][y]);
    path(x+1, y+1, total+map[x][y]);
    path(x+1, y, total+map[x][y]);
}

int main(void){
    scanf("%d", &usrx, &usry);

    for(i = 0; i < usrx; i++){
        for(j = 0; j < usry; j++){
            scanf("%d", &map[i][j]);
        }
    }

    printf("%d\n", path(0,0,0));
}