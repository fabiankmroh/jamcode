#include <stdio.h>

using namespace std;

#define TRUE  1
#define FALSE 0

int userinput;
int qloc[9];

int checkS(int x, int y){
    int i, j;

    /* Up Left */
    for(i = x; i >= 0; i--){
        for(j = y; j >= 0; j--){
            if(qloc[i] == j){
                return FALSE;
            } 
        }
    }

    /* Up Right */
    for(i = x; i < userinput; i++){
        for(j = y; j >= 0; j--){
            if(qloc[i] == j){
                return FALSE;
            }
        }
    }

    /* Up */
    for(j = y; j >= 0; j--){
        if(qloc[x] == j){
            return FALSE;
        }
    }

    return TRUE;
}

