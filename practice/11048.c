#include <stdio.h>

int lim;
int maMap[1000][1000];
int m, n;

int maze(int x, int y, int accu){
    if(x == 0){
        if(y == 0){
            maze(x, y, accu+maMap[x][y]);
            maze(x, y+1, accu+maMap[x][y]);
            maze(x+1, y, accu+maMap[x][y]);
            maze(x+1, y+1, accu+maMap[x][y]);
        }
        else(y == n){
            maze(x+1, y-1, accu+maMap[x][y]);
            maze(x, y01)
        }
    }

}