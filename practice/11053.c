#include <stdio.h>

int input;
int max = 0;
int cnt = 0;

int main(void){
    int lim;
    int i;
    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        scanf("%d", &input);

        if(input > max){
            cnt++;
            max = input;
        }
    }

    printf("%d\n", cnt);
}