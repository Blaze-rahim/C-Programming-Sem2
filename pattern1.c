#include <stdio.h>
int main(){
    int r;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){//2

        for(int j = 1; j<=i; j++){//2
            
            printf("%d",j); //12
        }
        printf("\n");
    }
    return 0;
}