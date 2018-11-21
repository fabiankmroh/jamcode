#include <stdio.h>
#include <stack>

using namespace std;

struct node{
    int nPressed;
    int cTemp;
};


int main(void){
    stack<struct node> s;
    int min = 9;

    int cTemp;
    int dTemp;
    scanf("%d %d", &cTemp, &dTemp);

    s.push((struct node){0, cTemp});

    while(s.size() != 0){
        struct node current = s.top();

        if(current.cTemp == dTemp){
            if(current.nPressed < min){
                min = current.nPressed;
            }

            s.pop();
            continue;
        }

        if((current.nPressed+1) > min){
            s.pop();
            continue;
        }

        s.pop();
        s.push((struct node){current.nPressed+1, current.cTemp-1});
        s.push((struct node){current.nPressed+1, current.cTemp-5});
        s.push((struct node){current.nPressed+1, current.cTemp-10});

        s.push((struct node){current.nPressed+1, current.cTemp+1});
        s.push((struct node){current.nPressed+1, current.cTemp+5});
        s.push((struct node){current.nPressed+1, current.cTemp+10});
    }


    printf("%d\n", min);
    return 0;
}