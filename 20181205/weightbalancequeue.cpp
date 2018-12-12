#include <stdio.h>

using namespace std;

typedef struct weightS{
    int list[7];
} weightS;

int front = 0;
int rear = 0;

void push(weightS input){
}

void pop(void){

}

/*
typedef struct weightS{
    int list[7];
} weightS;

int weightP[7] = {1,3,9,27,81,243,729};
int uInp;

int leftW(weightS w){
    int i;
    int lT = 0;

    uInp += lT;

    for(i = 0; i < 7; i++){
        if(w.list[i] == '1'){
            lT += weightP[i];
        }
    }

    return lT;
}

int rightW(weightS w){
    int i;
    int rT = 0;

    for(i = 0; i < 7; i++){
        if(w.list[i] == '2'){
            rT += weightP[i];
        }
    }

    return rT;
}

void print(weightS w){
    int i;

    // Left Side
    printf("%d ", uInp);
    for(i = 0; i < 7; i++){
        if(w.list[i] == 1){
            printf("%d ", weightP[i]);
        }
    }

    // Right Side
    for(i = 0; i < 7; i++){
        if(w.list[i] == 2){
            printf("%d ", weightP[i]);
        }
    }
}

int main(void){
    queue<int> q;


}
*/