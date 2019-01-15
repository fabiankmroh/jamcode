#include <stdio.h>
#include <queue>

using namespace std;

int main(void){
    queue<int> s;

    s.push(10);
    s.push(20);
    s.pop();

    printf("%d\n", s.size());
    printf("%d\n", s.empty());
}