#include <stdio.h>

int yaksoo(int a){
	int cnt=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	int t;
	int count=0;
	scanf("%d", &t);
	for(int m=0;m<t;m++){
		count=0;
		int n;
		scanf("%d", &n);
		for(int k=1;k<=n;k++){
			if(yaksoo(k)%2==1){
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
