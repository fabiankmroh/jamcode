#include <stdio.h>
#include <algorithm>

using namespace std;
int num[100];

int one(int n){
    int i;
    num[1] = 0;
    
    for(i = 0; i < n; i++){
        if(num[i] > 0){
            continue;
        }

        num[i] = one(i-1) + 1;
        if(i % 3 == 0){
            num[i] = min(num[i], one(i/3) + 1);
        }
        else if(i % 2 == 0){
            num[i] = min(num[i], one(i/2) + 1);
        }
    }

    return num[i];
}

int main(void){
    printf("%d\n", one(10));
}