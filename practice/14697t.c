#include <stdio.h>

int main(void){
    int a, b, c;
    int i, j, k;
    int students;
    
    scanf("%d %d %d %d", &a, &b, &c, &students);
    
    for(i = 0; i <= students/a; i++){
        for(j = 0; j <= students/b; j++){
            for(k = 0; k <= students/c; k++){
                if(students == a*i + b*j + c*k){
                    printf("1\n");
                    return 0;
                }
            }
        }
    }

    printf("0\n");
    return 0;
}