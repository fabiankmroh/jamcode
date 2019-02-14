#include <stdio.h>

int table[150][150];
int lim;
int cnt;

int jump(int x, int y, int dist){
    if(table[x][y] == 0){
        return 0;
    }
    if(x == lim && y == lim){
        cnt++;
        return 0;
    }
    
    if(x + dist > lim){
        jump(x, y+dist, table[x][y+dist]);
    }
    else if(y + dist > lim){
        jump(x+dist, y, table[x+dist][y]);
    }
    else{
        jump(x, y+dist, table[x][y+dist]);
        jump(x+dist, y, table[x+dist][y]);
    }
}

int main(void){
    scanf("%d", &lim);

    for(int i = 0; i < lim; i++){
        for(int j = 0; j < lim; j++){
            scanf("%d", &table[i][j]);
        }
    }

    jump(0,0,table[0][0]);

    printf("%d\n", cnt);   
}