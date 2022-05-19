#include <stdio.h>
int main(){
    int c, a,b;
    printf("1. Add\n2.Sub \n3.Multiply");
    scanf("%d",&c);

    printf("Enter 2 numbers");
    scanf("%d %d", &a,&b);

    switch (c)
    {
    case 1:
        printf("Addition : %d", a+b);
        break;
    
    case 2:
        printf("Substraction : %d", a-b);
        break;

    case 3:
        printf("Multiplication : %d", a*b);
        break;

    default:
        break;
    }
    return 0;
}