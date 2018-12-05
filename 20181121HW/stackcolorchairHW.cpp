#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

struct node{
    int color;
    int total;
};

int cnt = 0;

int main(void){
    stack<struct node> chair;
    chair.push((struct node){0,0});

    struct node current;
    
    while(chair.size() != 0){
        current = chair.top();

        if(current.total == 3){
            if(current.color == 2){
                cnt++;
            }
            chair.pop();
            continue;
        }

        chair.pop();
        chair.push((struct node){current.color+1, current.total+1});
        chair.push((struct node){current.color, current.total+1});
    }

    printf("%d\n", cnt);
    return 0;
}