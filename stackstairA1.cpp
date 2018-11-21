#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> nodeS;
    nodeS.push(0);

    int cnt = 0;
    int a;

    scanf("%d", &a);

    while(nodeS.size() != 0){
        int current = nodeS.top();

        if(current == a){
            nodeS.pop();
            cnt++;
            continue;
        }
        else if(current > a){
            nodeS.pop();
            continue;
        }
        nodeS.pop();      
        nodeS.push(current+1);
        nodeS.push(current+2);
    }

    printf("%d\n", cnt);
}