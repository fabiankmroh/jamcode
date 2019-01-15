#include <stdio.h>

int max = 0;
int triangle[500][500];
int x, n;

int add(int cX, int cY){
    n += triangle[cX][cY];
    printf("%d\n", triangle[cX][cY]);

    if(cX == x){
        if(n > max) max = n;
        
        n = 0;
        return n;
    }

    add(cX+1, cY+1) + add(cX+1, cY);
}

int main(void){
    scanf("%d", &x);
    
    for(int i = 0; i < x; i++){
        for(int j = 0; j < i; j++){
            scanf("%d", &triangle[i][j]);
        }
    }

    n = 0;
    printf("\n");
    add(0, 0);
    printf("\n");
    printf("%d\n", max);
}