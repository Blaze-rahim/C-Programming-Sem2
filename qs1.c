#include <stdio.h>
int main(){
    int r;
    printf("Value of r :");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i ; j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
int main(){

    int r ; 
    printf("Value of r :");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){
        for(int s=1; s<=r-i; s++){
            printf(" ");
        }

        for(int j = i; j>=1 ; j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}