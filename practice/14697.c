#include <stdio.h>

int main(void){
    int a, b, c;
    int students;
    int i;
    
    scanf("%d %d %d %d", &a, &b, &c, &students);

    for(i = 1; i <= students; i *= a){
        continue;
    }

    students -= i;

    if(students % b == 0){
        printf("1\n");
        return 0;
    }
    
    if((students % b) % c == 0){
        printf("1\n");
        return 0;
    }
    
    if(students % c == 0){
        printf("1\n");
        return 0;
    }

    printf("0\n");

    return 0;
}