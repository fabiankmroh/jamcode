#include <stdio.h>
#include <stack>
#include <memory.h>

using namespace std;

int wP[7] = {1,3,9,27,81,243,729};
int userinput;

typedef struct weight{
    int w[7];
    int l;
    int r;
    int pN;
} w;

void print(w scale){
    int i;
    
    printf("%d ", userinput);

    // Left Side
    for(i = 0; i < 7; i++){
        if(scale.w[i] == 1){
            printf("%d ", wP[i]);
        }
    }

    printf("0 ");

    // Right Side
    for(i = 0; i < 7; i++){
        if(scale.w[i] == 2){
            printf("%d ", wP[i]);
        }
    }
    
    printf("\n");

    return;
}

int main(void){
    stack<w> s;
    scanf("%d", &userinput);
    int d[7] = {0,0,0,0,0,0,0};
    w first;
    memcpy(first.w,d,sizeof(d));
    first.l=userinput;
    first.r=0;
    first.pN=0;
    s.push(first); 
    
    while(!s.empty()){
        int cL = s.top().l;
        int cR = s.top().r;
        int cN = s.top().pN;
        int n[7];
        memcpy(n, s.top().w, sizeof(n));
        if(cL == cR){
            print(s.top());
            break;
        }
        if(cN == 7){
            s.pop();
            continue;
        }
        s.pop();
        n[cN] = 0; // Blank;
        w next;
        memcpy(next.w,n,sizeof(n)); // Creating next struct
        next.l=cL;
        next.r=cR;
        next.pN=cN+1;
        s.push(next);

        n[cN] = 1; // Left
        memcpy(next.w,n,sizeof(n)); // Creating next struct

        next.l=cL+wP[cN]; 
        next.r=cR;
        next.pN=cN+1;
        s.push(next);

        n[cN] = 2; // Right
        
        memcpy(next.w,n,sizeof(n)); // Creating next struct

        next.l=cL; 
        next.r=cR+wP[cN];
        next.pN=cN+1;
        s.push(next);
        
    }

}