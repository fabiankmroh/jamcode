#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> chair;

    chair.push(0);

    int cnt = 0;
    int input;

    scanf("%d", &input);

    while(chair.size() != 0){
        int current = chair.top();

        if(current == input){
            chair.pop();
            cnt++;
            continue;
        }
        else if(current > input){
            chair.pop();
            continue;
        }
        chair.pop();      
        chair.push(current+3);
        chair.push(current+5);
    }

    printf("%d\n", cnt);
}