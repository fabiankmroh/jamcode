#include <stdio.h>
#include <queue>

using namespace std;

int startX, startY;
char maze[100][100];
int visited[100][100];

typedef struct location{
    int locx;
    int locy;
    int dist;
} location;

int main(void){
    queue<location> coordinate;
    location current;

    int rowL, colL;
    scanf("%d %d", &rowL, &colL);

    for(int i = 0; i < rowL; i++){
        scanf("%s", maze[i]);

        for(int j = 0; j < colL; j++){
            if(maze[i][j] == 'S'){
                startX = i;
                startY = j;
            }
        }
    }

    current = (location){startX, startY, 0};
    coordinate.push(current);

    while(!coordinate.empty()){
        current = coordinate.front();
        visited[current.locx][current.locy] = 1;

        if(maze[current.locx][current.locy] == 'G'){
            printf("%d\n", current.dist);
            return 0;
        }

        coordinate.pop();

        /* Left */
        if((maze[current.locx-1][current.locy] != '#') && (current.locx-1) >= 0 && visited[current.locx-1][current.locy] == 0){
            coordinate.push((location){current.locx-1, current.locy, current.dist+1});
        }

        /* Right */
        if((maze[current.locx+1][current.locy] != '#') && (current.locx+1) < rowL && visited[current.locx+1][current.locy] == 0){
            coordinate.push((location){current.locx+1, current.locy, current.dist+1});
        }

        /* Up */
        if((maze[current.locx][current.locy-1] != '#') && (current.locy-1) >= 0 && visited[current.locx][current.locy-1] == 0){
            coordinate.push((location){current.locx, current.locy-1, current.dist+1});
        }

        /* Down */
        if((maze[current.locx][current.locy+1] != '#') && (current.locy+1) < colL && visited[current.locx][current.locy+1] == 0){
            coordinate.push((location){current.locx, current.locy+1, current.dist+1});
        }
        //visited[current.locx][current.locy] = 0;
    }

    return 0;
}