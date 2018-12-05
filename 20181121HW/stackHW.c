#include <stdio.h>

int stack[1000];
int pointer = 0;

void push(int element){
    stack[pointer] = element;
    pointer++;
}

void pop(){
    if(pointer > 0){
        pointer--;
    }
}

void print(){
    int cnt;

    for(cnt = pointer-1; cnt >= 0; cnt--){
        printf("%d\n", stack[cnt]);
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