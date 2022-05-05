#include <stdio.h>
int main(){
    int a = 2,b=3;

    printf("The AND of %d and %d is %d\n", a, b, (a & b)); 
    printf("The OR of of %d and %d is %d\n",a,b,(a | b)); 
    printf("The EXOR of of %d and %d is %d\n",a,b,(a^b));

    printf("The NOT of %d is %d\n",a,~a); 
    printf("The NOT of %d is %d\n",b,~b);

    printf("The right shift of %d is %d\n",a,(a>>2)); 
    printf("The left shift of %d is %d\n",b,(b<<2));

    return 0;

}