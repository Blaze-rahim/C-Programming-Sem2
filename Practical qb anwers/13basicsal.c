#include <stdio.h>
int main(){
    int bs,da,hra,gs;
    printf("Your salary?");
    scanf("%d",&bs);

    da = bs*(0.6);
    hra = bs*(0.5);
    gs = bs+da+hra;

    printf("your gross salary is %d",gs);
    return 0;
}