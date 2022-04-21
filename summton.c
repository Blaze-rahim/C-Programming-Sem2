#include <stdio.h>
int main(){
    int a=0, m, n;
    printf("Enter the value of m and n");
    scanf("%d %d", &m,&n);
    do{
        a+=m;
        m++;
    }while(m<=n);
    printf("%d",a);
    return 0;
}