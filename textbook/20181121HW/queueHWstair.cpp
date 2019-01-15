#include <stdio.h>
#include <stdlib.h>
#include <queue>


using namespace std;

queue q;

int cnt = 0;

int main(void){
    queue<int> q;
    q.push(0);
    int stairL;
    
    while(q.size() != 0){
        stairL = q.front();
        if(stairL == 4){
            cnt++;
            q.pop();
            continue;
        }

        if(stairL > 4){
            q.pop();
            continue;
        }

        q.pop();
        q.push(stairL+1);
        q.push(stairL+2);
    }
    printf("%d\n", cnt);
}