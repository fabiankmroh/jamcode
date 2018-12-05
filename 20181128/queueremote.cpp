#include <stdio.h>
#include <queue>
#include <stdlib.h>

using namespace std;

typedef struct remote{
    int temp;
    int button;
}N;

int main(void){
    queue<N> q;
    int min = 999;
    int currentT, assignT;

    scanf("%d %d", &currentT, &assignT);
    q.push((N){currentT, 0});

    N current;

    while(q.size() != 0){
        current = q.front();
        if(current.temp == assignT){
            printf("%d\n", current.button);
            break;
        }
        q.pop();

        if(current.temp < min){
            q.push((N){current.temp+1, current.button+1});
            q.push((N){current.temp+5, current.button+1});
            q.push((N){current.temp+10, current.button+1});
        }
        else{
            q.push((N){current.temp-1, current.button+1});
            q.push((N){current.temp-5, current.button+1});
            q.push((N){current.temp-10, current.button+1});
        }
    }
}