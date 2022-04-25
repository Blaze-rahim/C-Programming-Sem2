// sine(x) = x− x^3/fact(3) + x^5/fact(5) −x^7/fact(7)

#include <stdio.h>
#include<math.h>
int main(){
    int n, sign = -1,fact=1;
    float sine, rad, deg;

    printf("Value of n : ");
    scanf("%d",&n);

    printf("Angle in deg : ");
    scanf("%f",&deg);

    rad = deg*3.14/180;//making deg to radians
    sine = rad;


    for(int i = 3 ; i<=n ;i+=2){
        fact = fact*i*(i-1);
        sine = sine + sign*pow(rad,i)/fact;
        sign *= -1;
    }
    printf("%.5f", sine);
    return 0;
}