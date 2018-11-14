#include <stdio.h>

int stack[1000];
int top = 0;

void push(int input){
    stack[top] = input;
    top++;
}

void pop(){
    if(top > 0){
        top--;
    }
}

void print(){
    int i;

    for(i = top-1; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(void){
    char input[10];
    int element;

    while(1){
        scanf("%s", input);

        if(input[1] == 'x'){
            break;
        }

        switch(input[1]){
            case 'u':
                scanf("%d", &element);
                push(element);
                break;
            case 'o':
                pop();
                break;
            case 'r':
                print();
                break;
        }
    }
}