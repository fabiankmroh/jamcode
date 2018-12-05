#include <stdio.h>

int cnt = 0;
int totalI;
int desiredC;

void chair(int total, int color){
    if(total == totalI){
        if(color == desiredC){
            cnt++;
        }

        return;
    }

    chair(total+1, color+1);
    chair(total+1, color);
}

int main(void){
    scanf("%d %d", &totalI, &desiredC);
    chair(0,0);
    printf("%d\n", cnt);
}