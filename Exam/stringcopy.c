#include <stdio.h>
int main(){
    char arr1[100], arr2[100];

    printf("Enter the word");
    scanf("%s",arr1);

    for(int i = 0; arr1[i]!='\0';i++){
        arr2[i]=arr1[i];
    }
    puts(arr2);
    return 0;
}