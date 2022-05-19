#include <stdio.h>
int sum(int n);
int main(){
    
    int a, s =0;
    printf("Enter the number foer which you need the sum of");
    scanf("%d",&a);
    s = sum(a);
    printf("sum is %d",s);
    return 0;
}

int sum(int n){
    if (n == 0){
        return 0;
    }
    else {
        return (n + sum(n-1));
    }
}

