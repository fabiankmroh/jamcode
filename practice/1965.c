#include <stdio.h>

int main(void){
    int ans = 0;
    int cnt = 0;
    int lim; 
    int arr[1200];
    int i, j;

    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        cnt = 0;
        scanf("%d", &arr[i]);
        for(j = 0; j < i; j++){
            if(arr[j] < arr[i]){
                cnt++;
            }
            else break;
        }

        if(cnt > ans) ans = cnt;
    }
    
    printf("%d\n", cnt);
}