#include <stdio.h>

int main(void){
    int cellS[101]; // 0 = Locked  1 = Open
    int i, j, k, n, t;
    
    scanf("%d", &t);

    for(i = 0; i < 101; i++){
        cellS[i] = 0;
    }

    for(i = 0; i < t; i++){
        scanf("%d", &n);
        int ans = 0;
        for(j = 1; j <= n; j++){
            for(k = 1; k <= n; k+=j){
                if(cellS[k] == 0){
                    cellS[k]++;
                }
                else{
                    cellS[k]--;
                }
            }
        }

        for(k = 1; k <= n; k++){
            if(cellS[k] == 1) ans++;
        }

        printf("%d\n", ans);
    }


}