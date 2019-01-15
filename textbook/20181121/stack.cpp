/* C++ compiles w/ g++ */
#include <stdio.h>
#include <stack>

using namespace std;

int main(void){
    stack<int> s; /* stack elements are all integers */

    s.push(10);
    s.push(15);
    s.pop();
    printf("%d\n", s.size());
    printf("%d\n", s.empty());

    printf("%d\n", s.top());
    return 0;
}