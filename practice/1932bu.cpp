#include <stdio.h>
#include <algorithm>

using namespace std;

int tri[600][600];
int accu[600][600];
int lim;
int i, j;

// Starting from second bottom row
int calcMax(int x, int y){
    if(x == lim){
        return 0;
    }
    if(x > 1 && accu[x][y] != 0) return 0;
    calcMax(x+1, y);
    calcMax(x+1, y+1);
    accu[x][y] = accu[x][y] + max(accu[x+1][y], accu[x+1][y+1]);
}

int main(void){
    int ans = 0;
    scanf("%d", &lim);

    for(i = 1; i <= lim; i++){
        for(j = 1; j <= i; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    for(i = 1; i <= lim; i++){
        accu[lim][i] = tri[lim][i];
    }
    calcMax(1,1);

    ans = accu[1][1];
    printf("%d\n", ans);
}