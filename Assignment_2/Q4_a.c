#include <stdio.h>
int main(){
    int n;
    float sum = 1, res = 1;
    printf("ENter ur n");
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++){
        for (int j=1; j<=i; j++) res *= j;
        sum += 1.0/res;
    }
    printf(" The sum is : %d",sum);
    return 0;
}