/* 
1
21
123
4231
12345 */

#include <stdio.h>
int main(){
    int r;
    printf("Enter the number of rows");
    scanf("%d", &r);
    for(int i = 1; i<=r; i++){
        if(i%2 == 0){
            for(int j = i; j>=1; j--){
                printf("%d",j);
            }
            printf("\n");
        }
        else{
            for(int j = 1; j<=i; j++){
                printf("%d",j);
            }
            printf("\n");
        }
    }
    return 0;
}