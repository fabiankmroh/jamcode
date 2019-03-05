#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[1000];
int lis[1000];
int here, ans;

int main(void){
    int lim;
    int i, j;

    scanf("%d", &lim);

    for(i = 1; i <= lim; i++){
        scanf("%d", &arr[i]);

        here = 0;
        for(j = 1; j < i; j++){
            if(arr[i] > arr[j]){
                here = max(here, lis[j]);
            }
        }
        lis[i] = here + 1;
        ans = max(ans, lis[i]);
    }
    printf("%d\n", ans);
    return 0;
}