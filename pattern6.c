#include <stdio.h>
int main(){
    int r, z = 1;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = r; i>=1; i--){
        
        for(int j = 1; j<=i; j++){
            printf("%d",j);
        }
        
        printf("\n");
    }
    return 0;
}