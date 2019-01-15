#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

struct node{
    int colorC;
    int totalC;
};

int cnt = 0;

int main(void){
    int n, k;
    scanf("%d %d", &n, &k);
    
    stack<struct node> chairS;
    chairS.push((struct node){0,0});

    struct node current;
    
    while(chairS.size() != 0){
        current = chairS.top();

        if(current.totalC == n){
            if(current.colorC == k){
                cnt++;
            }
            chairS.pop();
            continue;
        }

        chairS.pop();
        chairS.push((struct node){current.colorC+1, current.totalC+1});
        chairS.push((struct node){current.colorC, current.totalC+1});
    }

    printf("%d\n", cnt);
    return 0;
}