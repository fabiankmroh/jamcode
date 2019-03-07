#include <stdio.h>
#include <algorithm>
using namespace std;
 
int arr[1001], dp[1001], ans, N;
//dp[i] = i번째 원소를 마지막으로 하는 LIS의 길이
int main() {
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i) {
        scanf("%d", &arr[i]);
        int here = 0;
        for(int j = 1; j < i; ++j) {
            if(arr[i] > arr[j])
                here = max(here, dp[j]);
        }
        dp[i] = here + 1;
        ans = max(ans, dp[i]);
    }
    printf("%d\n", ans);
    return 0;
}