#include <stdio.h>

int N;
int ans = 9999;
int color[3][1500];
int add[3][1500];
int final[3];

void sort(int x, int y){
    if(y == 0){
        final[x] = add[x][y];
        return;
    }
        
    if(x == 0){
        if(color[x+1][y+1] < color[x+2][y+1]){
            add[x][y] = color[x][y] + color[x+1][y+1];
        }
        else{
            add[x][y] = color[x][y] + color[x+2][y+1];
        }
    }
    else if(x == 1){
        if(color[x-1][y+1] < color[x+1][y+1]){
            add[x][y] = color[x][y] + color[x-1][y+1];
        }
        else{
            add[x][y] = color[x][y] + color[x+1][y+1];
        }
    }
    else if(x == 2){
        if(color[x-2][y+1] < color[x-1][y+1]){
            add[x][y] = color[x][y] + color[x-2][y+1];
        }
        else{
            add[x][y] = color[x][y] + color[x-1][y+1];
        }
    }

    sort(0, y-1);
    sort(1, y-1);
    sort(2, y-1);
}

int main(void){
    int i, j;
    
    scanf("%d", &N);

    for(i = 0; i < N; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &color[j][i]);
        }
    }

    sort(0, N-2);
    sort(1, N-2);
    sort(2, N-2);

    for(i = 0; i < 3; i++){
        if(final[i] < ans) ans = final[i];
    }

    printf("%d\n", ans);
}