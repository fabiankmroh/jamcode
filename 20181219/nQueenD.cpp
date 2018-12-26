#include <stdio.h>
#include <stack>

using namespace std;

int lim;

typedef struct c{
    int x;
    int y;
} coordinate;

stack<coordinate> current;
stack<coordinate> previous;

void c2p(void){
    int pY;

    while(current.empty() == 1){
        coordinate cLoc = current.top();   

        /* End of DFS Loop */
        if(cLoc.y == pY){
            break;
        }

        previous.push(cLoc);

        pY = cLoc.y;
        current.pop();
    }

    
}