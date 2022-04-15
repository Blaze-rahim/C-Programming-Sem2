/*

*********
 *******
  *****
   ***
    *
       
    */

#include <stdio.h>

int main(){
    int r;
    
    printf("Enter the number of rows");
    scanf("%d",&r);
    
    for(int i = r; i>=1 ; i--){
        
        for(int space = 1; space <= r-i; space++){
            printf(" ");
        }
        
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        
        for(int l = 1; l<=i-1; l++){
            printf("*");
        }

        printf("\n");
    
    }
    return 0;
}