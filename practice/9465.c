#include <stdio.h>

int n;
int cScore[2][1000];
int maxScore=0;


void sticker(int m, int a, int currentScore){
    if(m==n){
        if(currentScore > maxScore) maxScore=currentScore;
        return;
    }
    if(a==0){
        currentScore+=cScore[0][m];
        sticker(m+1,1,currentScore);
        sticker(m+1,2,currentScore);
    }

    else if(a==1){
        currentScore += cScore[1][m];
        sticker(m+1, 0, currentScore);
        sticker(m+1, 2, currentScore);
    }

    else if(a==2){
        sticker(m+1, 0, currentScore);
        sticker(m+1, 1, currentScore);
        sticker(m+1, 2, currentScore);
    }
}


int main(){
    int t;
    int c;
    scanf("%d", &t);
    
    for(c = 0; c < t; c++){
        scanf("%d", &n);
        for(int i=0;i<n;i++){
            scanf("%d", &cScore[0][i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d", &cScore[1][i]);
        }

        sticker(0,0,0);
        sticker(0,1,0);
        sticker(0,2,0);

        printf("%d\n", maxScore);
    }
}