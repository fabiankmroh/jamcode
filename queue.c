#include <stdio.h>

typedef struct{
    int queue[1000];
    int fLink;
    int rLink;
}queue;

queue q;

void push(int element){
    q.queue[q.rLink] = element;
    q.rLink++;
}

void pop(){
    if(q.fLink < q.rLink) q.fLink++;
}

void print(){
    int i;
    for(i = q.fLink; i < q.rLink; i++){
        printf("%d\n", q.queue[i]);
    }
}

int main(void){
    char input[10];
    int element;

    q.fLink = 0;
    q.rLink = 0;

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