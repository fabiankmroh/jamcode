#include <stdio.h>
#include <queue>

char map[100][100];
int rowL, colL;
int startX, startY;

typedef struct place{
    int x;
    int y;
    int dist;
} location;

using namespace std;

int main(void){
    int i, j;
    queue<location> coordinate;

    scanf("%d %d", &rowL, &colL);
    
    for(i = 0; i < rowL; i++){
        scanf("%s", map[i]);

        for(j = 0; j < colL; j++){
            if(map[i][j] == 'S'){
                startX = i;
                startY = j;
            }
        }

    } /* End of for loop */


    coordinate.push((location){startX, startY, 0});
    location current;

    while(!coordinate.empty()){
        current = coordinate.front();

        /* Arrival Check */
        if(map[current.x][current.y] == 'G'){
            printf("%d\n", current.dist);
            return 0;
        }

        coordinate.pop();

        /* Left */
        if(map[current.x-1][current.y] != '#' && current.x-1 >= 0){
            coordinate.push((location){current.x-1, current.y, current.dist+1});
        }

        /* Right */
        if(map[current.x+1][current.y] != '#' && current.x+1 < colL){
            coordinate.push((location){current.x+1, current.y, current.dist+1});
        }

        /* Up */
        if(map[current.x][current.y-1] != '#' && current.y-1 >= 0){
            coordinate.push((location){current.x, current.y-1, current.dist+1});
        }

        /* Down */
        if(map[current.x][current.y+1] != '#' && current.y+1 < rowL){
            coordinate.push((location){current.x, current.y+1, current.dist+1});
        }
    }

    return 0;
}