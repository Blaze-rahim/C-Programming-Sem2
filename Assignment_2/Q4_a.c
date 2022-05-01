#include <stdio.h>
int main(){
    int n, res = 1;
    float sum = 0;
    printf("ENter ur n");
    scanf("%d",&n);
    for(int i = 1; i<=n ; i++){
        for (int j=2; j<=n; j++) res *= j;
        
        sum += 1.0/res;
    }
    printf(" The sum is : %.3f",sum);
    return 0;
}