#include<stdio.h>
int main(){
	int n, s=0;
	printf("Numberr");
	scanf("%d",&n);
	for (int i = 1; i<n; i++){
		if (n%i==0) s += i;
	}
	if(s==n) printf("Perfect number");
	else printf("Not perfect");
	return 0;
}	
