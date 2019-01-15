#include <stdio.h>

int cnt = 0;

void chair(int total, int color){
    if(total == 3){
        if(color == 2){
            cnt++;
        }

        return;
    }

    chair(total+1, color+1);
    chair(total+1, color);
}

int main(void){
    chair(0,0);
    printf("%d\n", cnt);
}