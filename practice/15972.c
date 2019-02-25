#include <stdio.h>

int main(void){
    int w, l, h;
    int container[1001][1001];
    int i, j;

    scanf("%d %d %d", &w, &l, &h);

    for(i = 0; i < w+1; i+=2){
        for(j = 0; j < l+1; j+=2){
            scanf("%d", &container[i][j]);
        }
    }
    
    
}