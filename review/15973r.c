#include <stdio.h>

int main(void){
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    int xcase;
    int ycase;
    int a;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    scanf("%d %d %d %d", &x3, &y3, &x4, &y4);

    // X
    if(x1 < x3){
        if(x2 < x3) xcase = 0;
        else if(x2 == x3) xcase = 1;
        else if(x2 > x3) xcase = 2;
    }
    else if(x1 == x3) xcase = 2;
    else if(x1 > x3){
        if(x4 < x1) xcase = 0;
        else if(x4 == x1) xcase = 1;
        else if(x4 > x1) xcase = 2;
    }

    // Y
    if(y1 < y3){
        if(y2 < y3) ycase = 0;
        else if(y2 == y3) ycase = 1;
        else if(y2 > y3) ycase = 2;
    }
    else if(y1 == y3) ycase = 2;
    else if(y1 > y3){
        if(y4 < y1) ycase = 0;
        else if(y4 == y1) ycase = 1;
        else if(y4 > y1) ycase = 2;
    }

    a = xcase * ycase;
    
    switch (a){
        case 0:
            printf("NULL\n");
            break;
        case 1:
            printf("POINT\n");
            break;
        case 2: 
            printf("LINE\n");
            break;
        case 4:
            printf("FACE\n");
            break;
        default:
            break;
    }

    return 0;
}