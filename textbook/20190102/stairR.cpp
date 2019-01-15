#include <stdio.h>

using namespace std;

int stairS[6] = {10, 20, 15, 25, 10, 20};
int maxS = 0;

void stair(int score, int stairN, int oneC){
    if(stairN > 6){
        return;
    } else if(stairN == 6){
        if(score > maxS) maxS = score;
        return;
    }
    
    if(oneC == 0){
        stair(score + stairS[stairN+1], stairN+1, oneC+1);
    }
    stair(score + stairS[stairN+2], stairN+2, 0);
}

int main(void){
    stair(0,0,0);
    printf("%d\n", maxS);
}