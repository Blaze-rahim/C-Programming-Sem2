#include <stdio.h>

int main(){
int n, num1,num2,num3, reverse ;


    printf("Enter the number to reverse:\n");
    scanf("%d", &n);

    num1 = n / 100;
    printf("%d \n", num1);
    num2 = (n % 100)/10 ;
    printf("%d \n", num2);
    num3 = n%10 ;
    printf("%d \n", num3);

    // num1 , num2 , num3 are digits only  , to make a number use the below step
    reverse = 100*num3 + 10*num2 + num1;

        printf(" The reverse is %d", reverse);


    return 0;
}