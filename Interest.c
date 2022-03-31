#include <stdio.h>

int main(){
	int pri, time;
	float rate, si;
	printf("Enter principal, Rate, time \n");
	scanf ("%d %f %d", &pri, &rate, &time);
	si = pri*rate*time;
	printf("The SI is %f \n", si);
	return 0;
}
