#include <stdio.h>

int x1, x2, x3, x4;
int y1, y2, y3, y4;

int currentSX;
int currentSY;

int main(void){
    scanf("%d %d %d %d", x1, y1, x2, y2);
    scanf("%d %d %d %d", x3, y3, x4, y4);

    // X checkup
    if(x3 - x2 > 0 || x2 - x3 < 0){
        currentSX = 1;
    }    
    else if(x2 == x3 || x4 == x1){
        currentSX = 2;
    }
    else if(x1 < x3 && x3 < x2 && x4 > x2){
        currentSX = 3;
    }
    else if(x1 < x3 && x3 < x2 && x2 < x4){
        currentSX = 4;
    }
    else if(x1 < x2 && x2 < x3 && x1 < x4 && x4 < x1){
        currentSX = 5;
    }
    else if(x3 < x1 && x1 < x4 && x3 < x2 && x2 < x4){
        currentSX = 6;
    }

    // Y checkup
    if(y1 < y3 && y3 < y2 && y2 < y4){
        currentSY = 1;
    }
    else if(y1 < y4 && y4 < y2 && y3 < y1){
        currentSY = 2;
    }
    else if(y2 == y3 || y4 == y1){
        currentSY = 2;
    }


}