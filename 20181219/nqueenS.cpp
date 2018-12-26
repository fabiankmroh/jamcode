#include <stdio.h>
#include <stdlib.h>
#include <stack>

#define TRUE    1
#define FALSE   0

using namespace std;

int lim;
int cnt;
int i, j;

typedef struct L{
    int l[9];
}list;


stack<list> s;
list previous;

/* Ask teacher */
void queenStatus(int x, int y){
    list qLoc;

    if(x == lim-1){
        cnt++;
        return;
    }

    for(i = 0; i < lim; i++){
        int currentS = TRUE;

        for(j = 0; j <= x; j++){
            if(qLoc.l[j] == i){ // Up Vertical
                currentS = FALSE;
            }

            if(qLoc.l[j]+j == x+1+i){ // Right Vertical Check 
                currentS = FALSE;
            }

            if(j-qLoc.l[j] == x+1-i){ // Left Vertical Check
                currentS = FALSE; 
            }
        }

        if(currentS == TRUE){

        }
    }
}

int main(void){
    int i;
    list randomList;

    for(i = 0; i < lim; i++){
        randomList.l[i] = 0;
    }

    /* Random List Check */
    for(i = 0; i < lim; i++){
        randomList.l[i] = 1;

        int x, y;
    }
}