#include <stdio.h>
 int main(){
	 int m, total, max, r, c=0;
	 float per;
	 printf("r");
	 scanf("%d",&r);
	 for (int i = 1 ; i<=r ; i++){
		 printf("Enter the marks of three subjects");
	 	 scanf("%d", &m);
		  c+=m;
	 }
	 per = (c*100)/(r*100);
     
	 
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
