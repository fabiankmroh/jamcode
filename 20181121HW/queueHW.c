#include <stdio.h>

typedef struct{
    int queue[100];
    int fpointer;
    int rpointer;
}queue;

queue q;

void push(int element){
    q.queue[q.rpointer++] = element;
}

void pop(void){
    if(q.fpointer < q.rpointer) q.fpointer++;
}

void print(void){
    int i;
    for(i = q.fpointer; i < q.rpointer; i++){
        printf("%d\n", q.queue[i]);
    }
}

int main(void){
    char input[7];
    int element;

    q.fpointer = 0;
    q.rpointer = 0;

    while(1){
        scanf("%s", input);

        if(input[1] == 'x') break;

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