#include <stdio.h>
#include<string.h>
int main(){
    char arr[100];
    printf("Enter the word");
    scanf("%s",arr);
    int len = strlen(arr);

    for(int i = 0; i<len; i++){
        for(int j = 0; j<=i; j++){
            printf("%c",arr[j]);
        }
        printf("\n");
    }
    return 0;
}