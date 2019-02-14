#include <stdio.h>

int arr[1500];
int dp[1500];
int input;

int main(void){
    int i;
    int max = 0;

    scanf("%d", &input);

    for(i = 0; i < input; i++){
        scanf("%d", &arr[i]);
    }

    dp[0]=1;
    for(int j=1;j<input;j++){
        int maxi=0;
        for(int k=0;k<j;k++){
            if(arr[k]<arr[j]){
                if(dp[k]>maxi){
                    maxi=dp[k];
                }
            }
        }
        dp[j]=maxi+1;
    }

    for(i = 0; i < input; i++){
        if(max < dp[i]){
            max = dp[i];
        }
    }
    printf("%d\n", max);
}