#include <stdio.h>
#include <algorithm>

using namespace std;

int tri[600][600];
int accu[600][600];
int lim;
int i, j;

// Starting from second bottom row
void calcMax(int x, int y){
    if(accu[x][y] != 0) return;
    accu[x][y] = tri[x][y] + max(accu[x+1][y], accu[x+1][y+1]);
}

int main(void){

    scanf("%d", &lim);

    for(i = 1; i <= lim; i++){
        for(j = 1; j <= i; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    for(i = 1; i <= lim; i++){
        accu[lim][i] = tri[lim][i];
    }

    for(calcMax)
    printf("%d\n", accu[1][1]);
}