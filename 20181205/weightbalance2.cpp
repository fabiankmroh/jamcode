#include <stdio.h>

using namespace std;

int scale[7];
int weightP[7] = {1,3,9,27,81,243,729};
int userinput;

void print(){
    int i;

    printf("%d ", userinput);

    // Left Side
    for(i = 0; i < 7; i++){
        if(scale[i] == 1){
            printf("%d ", weightP[i]);
        }
    }

    printf("0 ");

    // Right Side
    for(i = 0; i < 7; i++){
        if(scale[i] == 2){
            printf("%d ", weightP[i]);
        }
    }

    printf("\n");
    return;
}

void balance(int l, int r, int wN){
    if(l == r){
        print();
        return;
    }
    if(wN == 7){
        return;
    }

    scale[wN] = 0;
    balance(l, r, wN+1);

    scale[wN] = 1;
    balance(l+weightP[wN], r, wN+1);

    scale[wN] = 2;
    balance(l, r+weightP[wN], wN+1);

    return;
}

int main(void){
    scanf("%d", &userinput);

    balance(userinput, 0, 0);

    return 0;
}