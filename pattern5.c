#include <stdio.h>
int main(){
    int r, z = 1;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){
        
        for(int j = 1; j<=i; j++){
            printf("%d",z);
            z++;
        }
        
        printf("\n");
    }
    return 0;
}