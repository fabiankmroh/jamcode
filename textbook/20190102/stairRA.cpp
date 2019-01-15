#include <stdio.h>
#include <algorithm>

using namespace std;

int stairS[6] = {10,20,15,25,10,20};

int stair(int n){
    int oneS, twoS;
    if(n > 0){
        oneS = stair(n-3) + stairS[n-1];
        twoS = stair(n-2);
        return max(oneS, twoS) + stairS[n];
    }

    return 0;
}

int main(void){
    printf("%d\n", stair(6));
}