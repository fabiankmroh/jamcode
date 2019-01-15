#include <stdio.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> s;

    s.push(10);
    s.push(15);
    s.pop();
    printf("%d\n", s.empty());
    s.pop();
    printf("%d\n", s.empty());
    return 0;
}
