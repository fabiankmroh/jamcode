#include <stdio.h>

int cnt = 0;

void chair(int red, int total){ /* 현재 존재하는 의자중 빨간색 칠한 의자, 총 존재하는 의자 */
    if(total == 3){
        if(red == 2){
            cnt++;
        }
        return;
    }

    /* 가지 치기 */
    chair(red+1, total+1); /* 빨간색을 하나 더 칠할 경우, 총 몇 번째 숫자 */
    chair(red, total+1); /* 빨간색을 안 칠하는 경우, */
}

int main(void){
    chair(0,0);
    printf("%d\n", cnt);
    return 0;
}