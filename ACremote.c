#include <stdio.h>

int min = 5;
int uTemp;

void remote(int temp, int gajiC){
    if(gajiC > min) return;
    if(temp == uTemp){
        if(gajiC < min){
            min = gajiC;
        }
        return;
    }

    remote(temp+1, gajiC+1);
    remote(temp+5, gajiC+1);
    remote(temp+10, gajiC+1);
    remote(temp-1, gajiC+1);
    remote(temp-5, gajiC+1);
    remote(temp-10, gajiC+1);
}

int main(void){
    int oTemp;

    printf("Original Temp:: ");
    scanf("%d", &oTemp);

    printf("Set Temp:: ");
    scanf("%d", &uTemp);

    remote(oTemp, 0);

    printf("%d\n", min);
}