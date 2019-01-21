#include <stdio.h>

int lim;
int quan[10000];

int wine(int n, int total, int str){
    if(n == lim-1){
        return total;
    }
    
    if(str < 2){
        wine(n+1, total+quan[n+1], str+1);
    }
    wine(n+2, total+quan[n+2], str);
}

int main(void){
    int i;

    scanf("%d", &lim);

    for(i = 0; i < lim; i++){
        scanf("%d", &quan[i]);
    }

    printf("%d\n", wine(0,0,0));
}