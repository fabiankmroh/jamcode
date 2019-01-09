#include <stdio.h>
#include <stack>

using namespace std;

int lim;

typedef struct c{
    int x;
    int y;
} coordinate;

/* Storage Variables */
int current[9];
stack<coordinate> random; /* Current ==> Random */
stack<coordinate> tmpcurrent;
stack<coordinate> previous;
int chessboard[9][9];

/* Count Variable */
int cnt = 0;

/* Random Generator */

void c2tc(void){
    int i;
    
    for(i = 0; i < lim; i++){
        tmpcurrent.push({current[i], i});
    }
}

void tc2p(void){
    int pY;

    while(current.empty() == 1){
        coordinate cLoc = tmpcurrent.top();   

        /* End of DFS Loop */
        if(cLoc.y == pY){
            break;
        }

        previous.push(cLoc);

        pY = cLoc.y;
        tmpcurrent.pop();
    }
}

void createCB(void){
    int qX, qY;

    while(previous.empty() == 1){
        qX = previous.top().x;
        qY = previous.top().y;

        chessboard[qY][qX] = 1;
    }
}

bool CBstatus(void){
    int i, j;
    int xC, yC;

    /* Current Queen Location */
    for(i = 0; i < lim; i++){
        for(j = 0; j < lim; j++){
            if(chessboard[i][j] == 1){
                /* Up */
                xC = i;
                yC = j;
                while(xC > 0){
                    if(chessboard[xC][yC] == 1){
                        return false;
                    }
                    xC--;
                }

                /* Left Up */
                xC = i;
                yC = j;
                while(xC > 0 && yC > 0){
                    if(chessboard[xC][yC] == 1){
                        return false;
                    }
                    xC--;
                    yC--;
                }

                /* Right Up */
                xC = i;
                yC = j;
                while(xC < lim && yC > 0){
                    if(chessboard[xC][yC] == 1){
                        return false;
                    }
                }
                xC++;
                yC--;
            }
        }
    }

    return true;
}

int cntAdd{
    if(CBstatus() == true){
        cnt++;
    }
}