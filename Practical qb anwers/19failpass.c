#include <stdio.h>
 int main(){
	 int m1, m2, m3, total, max;
	 float per;
	 
	 printf("Enter the marks of three subjects");
	 scanf("%d %d %d", &m1, &m2, &m3);
	 total = m1+m2+m3;
	 per = (total*100)/300;
	 
	 if((per>=70) && (per<=100)){
		 printf("A\n");
	 }

	 else if ((per>=60) && (per<=69)){
		 printf("B\n");
	 }

	 else if((per>=40) && (per<=59)){
		 printf("C\n");
	 }

	 else{
		 printf("Fail!\n");
	 }
	 return 0;
	
 }
