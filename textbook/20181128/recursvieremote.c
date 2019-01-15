#include <stdio.h>

int min = 10;
int stemp;
int current;

void remote(int cTemp, int button){
    if(button > min) return;

    if(cTemp == stemp){
        if(button < min) min = button;

        return;
    }

    remote(cTemp-10, button+1);
    remote(cTemp-5, button+1);
    remote(cTemp-1, button+1);

    remote(cTemp+1, button+1);
    remote(cTemp+5, button+1);
    remote(cTemp+10, button+1);
}

int main(void){
    scanf("%d %d", &current, &stemp);

    remote(current, 0);

    printf("%d\n", min);
    return 0;
}