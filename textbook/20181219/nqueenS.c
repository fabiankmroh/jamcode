#include <stdio.h>

int qLoc[9];
int userinput;
int cnt = 0;

#define TRUE    1
#define FALSE   0

void queen(int x, int y){
    int i, j;
    qLoc[x] = y;

    if(x == userinput-1){
        cnt++;
        return;
    }

    for(i = 0; i < userinput; i++){
        int status = TRUE;

        for(j = 0; j <= x; j++){
            if(qLoc[j] == i){ // Up Vertical
                status = FALSE;
            }

            if(qLoc[j]+j == x+1+i){ // Right Vertical Check 
                status = FALSE;
            }

            if(j-qLoc[j] == x+1-i){ // Left Vertical Check
                status = FALSE; 
            }
        }

        if(status == TRUE) queen(x+1, i);
    }

    return;
}

int main(void){
    scanf("%d", &userinput);

    for(int k = 0; k < userinput; k++){
        queen(0,k);
    }

    printf("%d\n", cnt);
    return 0;
}