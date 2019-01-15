#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> stair;
    stair.push(0);

    int cnt = 0;
    int input;

    scanf("%d", &input);

    while(stair.size() != 0){
        int current = stair.top();

        if(current == input){
            stair.pop();
            cnt++;
            continue;
        }
        else if(current > input){
            stair.pop();
            continue;
        }
        stair.pop();      
        stair.push(current+3);
        stair.push(current+5);
    }

    printf("%d\n", cnt);
}