#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(void){
    queue<int> q;
    q.push(30);
    q.push(50);
    q.pop();
    printf("%d\n", q.front());
    q.push(40);
    q.push(232);
    printf("%lu\n", q.size());
    printf("%d\n", q.back());
    q.pop();
    q.pop();
    q.pop();
    printf("%d\n", q.empty());
    return 0;
}