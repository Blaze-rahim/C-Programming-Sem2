#include <stdio.h>
int main(){
    int i, n, f=1;
    float sum=1.0;
    printf("Eter the nnumber");
    scanf("%d", &n);

    for(i = 1; i<=n;i++){
        f*=i;
        sum = sum +(1.0/(float)f);
    }

    printf("Sum of series is %.3f", sum);
    return 0;
}