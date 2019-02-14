#include <stdio.h>

int main(void){
    int tri[500][500];
    int scor[500][500];

    int col;
    int i, j;

    scanf("%d", &col);
    for(i = 0; i < col; i++){
        for(j = 0; j <= i; j++){
            scanf("%d", &tri[i][j]);
        }
    }

    for(i = 0; i < col; i++){
        scor[col-1][i] = tri[col-1][i];
    }

    for(i = col-2; i >= 0; i--){
        for(j = 0; j <= i; j++){
            if(scor[i+1][j] > scor[i+1][j+1]){
                scor[i][j] = tri[i][j] + scor[i+1][j];
            }
            else{
                scor[i][j] = tri[i][j] + scor[i+1][j+1];
            }
        }
    }
    
    printf("%d\n", scor[0][0]);
}