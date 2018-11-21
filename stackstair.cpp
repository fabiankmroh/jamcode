#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> nodeS;
    nodeS.push(0);

    int cnt = 0;

    while(nodeS.size() != 0){
        int current = nodeS.top();

        if(current == 4){
            nodeS.pop();
            cnt++;
            continue;
        }
        else if(current > 4){
            nodeS.pop();
            continue;
        }
        nodeS.pop();      
        nodeS.push(current+1);
        nodeS.push(current+2);
    }

    printf("%d\n", cnt);
}