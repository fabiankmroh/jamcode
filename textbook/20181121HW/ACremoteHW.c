#include <stdio.h>

int desiredT;
int min = 99;

void remote(int temp, int numB){
    if(numB > min){
        return;
    }
    if(temp == desiredT){
        if(numB < min){
            min = numB;
        }

        return;
    }
    
    remote(temp+1, numB+1);
    remote(temp+5, numB+1);
    remote(temp+10, numB+1);

    remote(temp-1, numB+1);
    remote(temp-5, numB+1);
    remote(temp-10, numB+1);
}

int main(void){
    int currentTemp;
    scanf("%d %d", &currentTemp, &desiredT);

    remote(currentTemp, 0);

    printf("%d\n", min);
}