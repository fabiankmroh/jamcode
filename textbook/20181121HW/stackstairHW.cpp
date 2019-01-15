#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> stair;
    stair.push(0);

    int cnt = 0;

    while(stair.size() != 0){
        int current = stair.top();

        if(current == 4){
            stair.pop();
            cnt++;
            continue;
        }
        else if(current > 4){
            stair.pop();
            continue;
        }
        stair.pop();      
        stair.push(current+1);
        stair.push(current+2);
    }

    printf("%d\n", cnt);
}