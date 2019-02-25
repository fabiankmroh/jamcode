#include <stdio.h>
#include <stack>

typedef struct coordinate{
    int x;
    int y;
} c;

int dp[1000][1000];
int rec[1000][1000];
stack <c> s;

int f(int x, int y, int len){
    if(rec[x+1][y] > rec[x][y]){
        f(x+1, y, len+1);
    }

    else{
        
    }
}

int add(int )