#include <stdio.h>
int main(){
    int n1, n2, gdc, lcm, c=1,s;
    printf("2 numbers\n");
    scanf("%d%d", &n1, &n2);

    // if(n1<n2) s = n1;
    // else s = n2;
    s = n1<n2 ? n1 : n2;

    while (c<=s){
        if(n1 % c == 0 && n2 % c == 0) gdc = c;
        c++;
    }

    lcm  = (n1*n2)/gdc;
    
    printf("GDC is %d and LCM is %d",gdc,lcm);

    return 0;
}