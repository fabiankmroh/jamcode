#include <stdio.h>
#include <algorithm>

using namespace std;

int levM[10];
int stair[10] = {0,10,20,15,25,10,20};


int stairF(void){
    levM[1] = stair[1];
    levM[2] = levM[1] + stair[2];

    for(int i = 3; i <= 6; i++){
        levM[i] = max(levM[i-3] + stair[i-1], levM[i-2]) + stair[i];
    }

    return levM[6];
}

int main(void){
    printf("%d\n", stairF());
}