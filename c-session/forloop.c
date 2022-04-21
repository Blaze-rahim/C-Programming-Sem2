#include <stdio.h>
int main(){
    int i;

    for (i = 0; i < 1000; i++) {
        if (i == 10){
            printf("Hi at 10\n");
            break;
        }
        printf("In loop\n") ;   
    }
    printf("%d", i);
    return 0;
}