#include <stdio.h>

int main(void){
    int loc[4] = {0,1,3,4}; // Coordinate Location List
    int col[4] = {1,2,1,1}; // Color List (Matched Accordingly)
    int lim = 4;
    int i, j; 
    int currLoc;
    int ld, rd; // left distance, right distance
    int final = 0;

    /* scanf("%d", &lim);
    
    for(i = 0; i <= lim; i++){
        scanf("%d", &loc[i]);
        scanf("%d", &col[i]);
    } */

    for(i = 0; i < lim; i++){
        ld = 0;
        rd = 0;

        // Going Left
        for(j = i-1; j >= 0; j--){
            if(loc[j] != loc[i]){
                if(col[j] == col[i]){
                    ld = loc[i] - loc[j];
                    break;
                }
            }
        }

        // Going Right
        for(j = i+1; j < lim; j++){
            if(loc[j] != loc[i]){
                if(col[j] == col[i]){
                    rd = loc[j] - loc[i];
                    break;
                }
            }
        }

        // Distance Comparison
        if(ld < rd && ld > 0){
            final += ld;
        }
        else if(ld > rd && rd > 0){
            final += rd;
        }
    }

    printf("%d\n", final);

    return 0;
}