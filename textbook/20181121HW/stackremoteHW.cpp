#include <stdio.h>
#include <stack>

using namespace std;

struct node{
    int buttonN;
    int currentT;
};


int main(void){
    stack<struct node> s;
    int min = 99;

    int current;
    int assignT;
    scanf("%d %d", &current, &assignT);

    s.push((struct node){0, current});

    while(s.size() != 0){
        struct node current = s.top();

        if(current.currentT == assignT){
            if(current.buttonN < min){
                min = current.buttonN;
            }

            s.pop();
            continue;
        }

        if((current.buttonN+1) > min){
            s.pop();
            continue;
        }

        s.pop();

        s.push((struct node){current.buttonN+1, current.currentT+1});
        s.push((struct node){current.buttonN+1, current.currentT+5});
        s.push((struct node){current.buttonN+1, current.currentT+10});

        s.push((struct node){current.buttonN+1, current.currentT-1});
        s.push((struct node){current.buttonN+1, current.currentT-5});
        s.push((struct node){current.buttonN+1, current.currentT-10});
    }


    printf("%d\n", min);
    return 0;
}