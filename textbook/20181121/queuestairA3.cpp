#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int cnt = 0;

int main(void){
    queue<int> q;
    q.push(0);

    int current;
    int a;

    scanf("%d", &a);

    while(q.size() != 0){
        current = q.front();

        if((current+1) % 4 == 0 && (current+1) != 0){
            q.pop();
            continue;
        }
        else if((current+2) % 4 == 0 && (current+2) != 0){
            q.pop();
            continue;
        }

        if(current == a){
            cnt++;
            q.pop();
            continue;
        }
        else if(current > a){
            q.pop();
            continue;
        }

        q.pop();
        q.push(current+1);
        q.push(current+2);
    }

    printf("%d\n", cnt);
    return 0;
}