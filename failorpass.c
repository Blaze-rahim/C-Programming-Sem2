#include <stdio.h>
 int main(){
	 int m1, m2, m3, total, max;
	 float per;
	 
	 printf("Enter the marks of three subjects");
	 scanf("%d %d %d", &m1, &m2, &m3);
	 total = m1+m2+m3;
	 per = (total*100)/300;
	 
	 if((per>=75) && (per<=100)){
		 printf("Distinction\n");
	 }

	 else if ((per>=60) && (per<=74)){
		 printf("First Class\n");
	 }

	 else if((per>=50) && (per<=59)){
		 printf("Second class\n");
	 }
	 
	 else if((per>=33) && (per<=49)){
		 printf("Pass\n");
	 }

	 else{
		 printf("Fail!\n");
	 }
	 return 0;
	
 }
