#include <stdio.h>

int coins[100]; /* Types of Coin */
int changeCase[10001]; 
int i, j;

int coinF(int k, int n){
    // Values w/ one method cases have been prevented by the main function
    for(i = 1; i < n; i++){ // Iterating thourgh types of coins
        for(j = 1; j <= k; j++){ // Iterating through the value. No method for cases where values < coin
            if(j >= coins[i]){
                changeCase[j] = changeCase[j] + changeCase[j-coins[i]];
            }
        }
    }
    
    return changeCase[k]; // Every case gets saved in here 
}

int main(void){
    int n, k;

    scanf("%d %d", &k, &n);
    for(i = 0; i < n; i++){
        scanf("%d", &coins[i]);
        changeCase[i] = 1; // IF RETURNING 0 => 1 METHOD AVAILABLE 
    }

    for(i = 1; i <= k; i++){
        if(i % coins[0] == 0){
            changeCase[i] = 1; // If the value is divisible by one type of coin, then there is only one method available
        }
    }

    printf("%d\n", coinF(k, n));

    return 0;
}