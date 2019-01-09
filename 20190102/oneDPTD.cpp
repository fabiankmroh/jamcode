#include <stdio.h>
#include <algorithm>

using namespace std;

int Ic[100];

int one(int n){
    if(n == 1){
        return 0;
    }
    else if(Ic[n] > 0){
        return Ic[n];
    }

    Ic[n] = one(n-1) + 1;
    if(n % 3 == 0){
        Ic[n] = min(Ic[n], one(n/3) + 1);
    }
    else if(n % 2 == 0){
        Ic[n] = min(Ic[n], one(n/2) + 1);
    }
    return Ic[n];
}

int main(void){
    printf("%d\n", one(12));
}