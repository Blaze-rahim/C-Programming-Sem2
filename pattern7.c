#include <stdio.h>
int main(){
    int i , j, k,  r, z = 1;
    printf("Enter the rows");
    scanf("%d",&r);
    for(i = 1; i<=r; i++){
        
        for(j = i; j<=r; j++){
            printf(" ");
        }
        for(k=1; k<=i;k++){
        printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}