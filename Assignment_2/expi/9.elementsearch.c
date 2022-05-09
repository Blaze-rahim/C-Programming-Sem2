#include <stdio.h>
int main(){
    int size, num, list[50], c;
    
    printf("Enter the No of elements in array");
    scanf("%d", &size);

    printf("Enter ya array elements bois");
    for(int i = 1; i<=size;i++) scanf("%d",&list[i]);

    printf("Enter the number u wanna search");
    scanf("%d", &num);
    
    for(int i = 0; i <= size ; i++){
        if (list[i] == num){
            printf("%d was found on the index of %d",num,i-1);
            c=0; 
            break;
        }
        else{
            c = 1;
        }

    } 
    if (c == 1) printf("Element not found!");
    return 0;
}