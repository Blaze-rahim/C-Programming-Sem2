#include <stdio.h>
int main(){
    int bs,da,hra,gs;
    printf("Your salary?");
    scanf("%d",&bs);

    da = bs*(0.4);
    hra = bs*(0.3);
    gs = bs+da+hra;

    printf("your gross salary is %d",gs);
    return 0;
}