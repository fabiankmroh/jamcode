#include <stdio.h>

int paintC[1000][3];
int minC = 99999;
int input;

int house(int number, int color, int price){
    if(number == input){
        if(price < minC){
            minC = price;
        }
 
        return 0;
    }

    if(color == 0){
        house(number+1, 1, price+paintC[number+1][1]);
        house(number+1, 2, price+paintC[number+1][2]);
    }
    else if(color == 1){
        house(number+1, 0, price+paintC[number+1][0]);
        house(number+1, 2, price+paintC[number+1][2]);
    }
    else if(color == 2){
        house(number+1, 0, price+paintC[number+1][0]);
        house(number+1, 1, price+paintC[number+1][1]);
    }
}

int main(void){
    int i, j;
    scanf("%d", &input);

    for(i = 0; i < input; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &paintC[i][j]);
        }
    }

    house(0,0,paintC[0][0]);
    house(0,1,paintC[0][1]);
    house(0,1,paintC[0][2]);

    printf("%d\n", minC); 
}