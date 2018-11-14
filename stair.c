#include <stdio.h>

int cnt = 0;
int dHeight;

void stair(int height){
    if(height == dHeight){
        cnt++;
        return;
    }
    else if(height > dHeight) return;

    stair(height+3);
    stair(height+5);
}

int main(void){

    scanf("%d", &dHeight);

    stair(0);

    printf("%d\n", cnt);
    return 0;
}