#include <stdio.h>
int main(){
    int n, f= 1; 
    float sum = 1;
    printf("ENter the num");
    scanf("%d", &n);

    for(int i =1; i<=n ; i++){
        for(int j = 1; j <=i; j++){
            f *=j;
        }
        sum = sum +(1/f);
    }
    printf("%d", sum);
    return 0;
}