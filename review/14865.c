/* Hand Draw Successful. TIMED OUT.

#1 Directly '0' or '1' on plane coordinate
#2 Store vertice coordinates in another array (w/o plane coordinate)
and determine hill status using if else cases */

#include <stdio.h>
int plane[123456][123456];

int main(void){
    int vertices;
    int x, y;
    int i, j;

    scanf("%d", &vertices);

    for(i = 0; i < vertices; i++){
        scanf("%d %d", &x, &y);

        plane[x][y] = 1;
    }

    for(i)
}