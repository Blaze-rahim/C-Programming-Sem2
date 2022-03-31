#include <stdio.h>
int main(){
    int r;
    char c = 'A';
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i; j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}