#include <stdio.h>

int main(void){
    int lim;
    int lst[123456789][2]; // Coordinate & Color
    int i, j; // Used for coordinate designation
    int k, l; // Used for coordinate searching
    int ld, rd; // left distance, right distance
    int final = 0;

    scanf("%d", &lim);
    
    for(i = 0; i <= lim; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &lst[i][j]);
        }
    }

    for(i = 0; i <= 123456789; i++){
        // Going Left
        for(j = i; j >= 0; j--){
            if(lst[j][1] == lst[i][1]){
                ld = i - j;
                break;
            }
        }

        // Going Right
        for(j = i; j <= 123456789; j++){
            if(lst[j][1] == lst[i][1]){
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
}