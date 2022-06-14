#include<stdio.h>

int main(){
	int n, c=0, p = 1, digit, sum=0, temp;
	printf("ENter ya value");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		n /= 10;
		c++;
	}
	n = temp;

	while(n>0){
		digit = n%10;
		n /= 10;
		p =1;
		for (int i = 0; i<c; i++){
			p *= digit;
		}
		sum += p;
		}
	if(sum == temp) printf("Armstrong number");
	else printf("Not armstrong");
	return 0;
	}
