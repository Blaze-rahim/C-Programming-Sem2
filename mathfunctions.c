#include<stdio.h>
#include<math.h>
int main(){
	int n, a, b;
	printf("Enther n");
	scanf("%d", &n);

	printf("The sqrt of %d is %f \n",n , sqrt(n));
	a = pow(n,2);
	printf("The square of %d is %d \n", n,a);
	b = pow(n,3);
	printf("The cube of %d is %d \n", n,b);

	return 0;
}
