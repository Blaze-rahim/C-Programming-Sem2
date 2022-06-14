#include <stdio.h>
int main(){
    int bs,da,hra,gs;
    printf("Your salary?");
    scanf("%d",&bs);
    if(bs>=30000){
        da = bs*(0.95);
        hra = bs*(0.3);
        gs = bs+da+hra;
    }
    else if(bs<30000){
        da = bs*(0.8);
        hra = bs*(0.1);
        gs = bs+da+hra;
    }
    printf("your gross salary is %d",gs);
    return 0;
}