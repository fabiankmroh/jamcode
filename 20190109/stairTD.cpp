#include <stdio.h>
#include <algorithm>

using namespace std;

int levM[6];
int stair[6] = {10,20,15,25,10,20};
int maxS;

int stairF(int pnt, int lvl){
    if(lvl < 0){
        return 0;
    }
    else if(lvl == 0){
        if(pnt > maxS) maxS = pnt;
        return 0;
    }

    if(levM[lvl] > 0){
        return levM[lvl];
    }

    int oneS = stairF(pnt+stair[lvl], lvl-3) + stair[lvl-1];
    int twoS = stairF(pnt+stair[lvl], lvl-2);

    levM[lvl] = max(oneS, twoS) + stair[lvl];
    return levM[lvl];
}

int main(void){
    stairF(0,6);

    printf("%d\n", maxS);
}