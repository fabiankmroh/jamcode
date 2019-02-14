#include <stdio.h>

int arr[10001], add[10001], N;
int ans = 0;

int main(void){
    int i;
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        scanf("%d", &arr[i]);
        int tmpA = arr[i];
        for(int j = 1; j <= i; j++) {
            if(arr[i] > arr[j])
                tmpA += arr[j];
            else break;    
        }

        if(tmpA > ans){
            ans = tmpA;
        }
    }
    printf("%d\n", ans);
    return 0;
}