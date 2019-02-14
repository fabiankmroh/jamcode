#include <stdio.h>

int i, j;
int cnt;

int add(int cnt, int remain){
    if(cnt == 1){
        return 1;
    }
    for(i = 1; i <= cnt; i++){
        for(j = 1; j < remain; j++){
            cnt += add(cnt+1, remain-1);
        }
    }
    return cnt;
}

int main(void){
    int usr, lim;
    scanf("%d %d", &usr, &lim);

    printf("%d\n", add(usr, lim));
}