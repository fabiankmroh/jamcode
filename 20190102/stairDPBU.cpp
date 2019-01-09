#include <stdio.h>
#include <algorithm>

using namespace std;

int stairS[6] = {10,20,15,25,10,20};
int maxS[6];

int stair(int n){
    int oneS, twoS;

    if(n < 6){
        if(maxS[n] > 0){
            return maxS[n];
        }

        oneS = stair(n+3) + stairS[n+1];
        twoS = stair(n+2);

        maxS[n] = max(oneS, twoS) + stairS[n];
        return maxS[n];
    }

    return 0;
}

int main(void){
    printf("%d\n", stair(0));
}