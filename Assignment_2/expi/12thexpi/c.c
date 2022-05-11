#include <stdio.h>
int main(){
    int lst[5];
    printf("Enter the elements");
    for(int i = 0; i < 5; i++){
        scanf("%d", lst+i);
    }

    printf("array is :");

    for(int i = 0; i < 5; i++){
        printf("%d\n", *(lst+i));
    }

    return 0;
}