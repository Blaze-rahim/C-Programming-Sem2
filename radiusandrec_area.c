#include<stdio.h>
void rect();
int main(){
	int radius;
	printf("Enter the radius of circle \n");
	scanf("%d", &radius);
	printf("The area is %f \n", 3.14*radius*radius);
	rect();
	return 0;
}

void rect(){
	int l, b;
	printf("Enter l and b : ");
	scanf("%d %d", &l , &b);
	printf("The area of rectrangle is %d \n", l*b);
}
	
