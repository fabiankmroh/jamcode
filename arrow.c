#include <stdio.h>

int main(void){
    int lim;
    int loc[123456789]; // Coordinate Location List
    int col[123456789]; // Color List (Matched Accordingly)
    int i, j; 
    int currLoc;
    int ld, rd; // left distance, right distance
    int final = 0;

    scanf("%d", &lim);
    
    for(i = 0; i <= lim; i++){
        scanf("%d", &loc[i]);
        scanf("%d", &col[i]);
    }

    for(i = 0; i <= lim; i++){
        loc[i] = currLoc;

        // Going Left
        for(j = currLoc; j >= 0; j--){
            if(col[j] == col[i]){
                ld = i - j;
                break;
            }
        }

        // Going Right
        for(j = currLoc; j <= lim; j++){
            if(col[j] == col[i]){
                rd = j - i;
                break;
            }
        }

        // Distance Comparison
        if(ld > rd){
            final += ld;
        }
        else{
            final += rd;
        }
    }

    printf("%d\n", final);

    return 0;
}