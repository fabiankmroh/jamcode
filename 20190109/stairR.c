#include <stdio.h>

int stairI[6] = {10,20,15,25,10,20};
int maxS;

void stair(int pnt, int level, int oneC){
    if(level > 6){
        return;
    }
    else if(level == 6){
        if(pnt > maxS){
            maxS = pnt;
        }
        return;
    }
    
    if(oneC < 1){
        stair(pnt+stairI[level], level+1, oneC+1);
    }
    stair(pnt+stairI[level], level+2, 0);

    return;
}

int main(void){
    stair(0,0,0);
    printf("%d\n", maxS);
}