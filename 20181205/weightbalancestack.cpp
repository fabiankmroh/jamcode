#include <stdio.h>
#include <stack>

using namespace std;

int wP[7] = {1,3,9,27,81,243,729};

typedef struct weight{
    int w1, w2, w3, w4, w5, w6, w7;
    int l;
    int r;
    int pN;
} w;

void print(w scale){
    int i;
    
    // Left Side
    for(i = 0; i < 7; i++){
        if(scale.wS[i] == 1){
            printf("%d ", wP[i]);
        }
    }

    printf("0 ");

    // Right Side
    for(i = 0; i < 7; i++){
        if(scale.wS[i] == 2){
            printf("%d ", wP[i]);
        }
    }
    
    printf("\n");

    return;
}

int main(void){
    int userinput;
    stack<w> s;
    scanf("%d", &userinput);

    s.push(0,0,0,0,0,0,0,0, userinput, 0, 0);
    
    while(!s.empty()){
        int cL = s.top().l;
        int cR = s.top().r;
        int cN = s.top().pN;

        int s1 = s.top().w1;
        int s2 = s.top().w2;
        int s3 = s.top().w3;
        int s4 = s.top().w4;
        int s5 = s.top().w5;
        int s6 = s.top().w6;
        int s7 = s.top().w7;

        if(cL == cR){
            print(s.top());
            break;
        }

        if(cN == 7){
            continue;
        }

        s.pop();

        
        if(cN == 1){
            s.push(1,s2,s3,s4,s5,s5,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(2,s2,s3,s4,s5,s6,s7, cL, cR + wP[cN], cN+1); // Right
        }
        if(cN == 2){
            s.push(s1,1,s3,s4,s5,s5,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(s1,2,s3,s4,s5,s6,s7, cL, cR + wP[cN], cN+1); // Right
        }
        if(cN == 3){
            s.push(s1,s2,1,s4,s5,s5,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(s1,s2,2,s4,s5,s6,s7, cL, cR + wP[cN], cN+1); // Right
        }
        if(cN == 4){
            s.push(s1,s2,s3,1,s5,s5,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(s1,s2,s3,2,s5,s6,s7, cL, cR + wP[cN], cN+1); // Right
        }
        if(cN == 5){
            s.push(s1,s2,s3,s4,1,s5,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(s1,s2,s3,s4,2,s6,s7, cL, cR + wP[cN], cN+1); // Right
        }
        if(cN == 6){
            s.push(s1,s2,s3,s4,s5,1,s7, cL + wP[cN], cR, cN+1); // Left
            s.push(s1,s2,s3,s4,s5,2,s7, cL, cR + wP[cN], cN+1); // Right
        }






        status[cN] = 1;
        s.push((w){status[7], cL + wP[cN], cR, cN+1});

        status[cN] = 2;
        s.push((w){status[7], cL, cR + wP[cN], cN+1});
        

    }

}