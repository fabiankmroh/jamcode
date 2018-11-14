#include <stdio.h>

int cnt = 0;
int totalC;
int color;

void chair(int paint, int total){ 
    if(total == totalC){
        if(paint == color){
            cnt++;
        }
        return;
    }

    /* 가지 치기 */
    chair(paint+1, total+1);  /* The added chair will be painted */
    chair(paint, total+1); /* The added chair will not be painted */
}

int main(void){
    printf("# of color chair::");
    scanf("%d", &color);
    printf("# of total chair::");
    scanf("%d", &totalC);

    chair(0,0);
    printf("%d\n", cnt);
    return 0;
}