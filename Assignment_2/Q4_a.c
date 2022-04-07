#include <stdio.h>
int fac(int n){
    int res = 1;
    for (int i=2; i<=n; i++) res *= i;
    return res;
}
int main(){
    int n;
    float sum;
    printf("ENter ur n");
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++){
        sum = 1.0/fac(i);
    }
    printf(" The sum is : %f",sum);
    return 0;
}