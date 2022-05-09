// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int len;
    char s1[100];
    
    printf("Ya string : ");
    scanf("%s",s1);
    
    for(len=0; s1[len] != '\0';len++);
    printf("The lenght of string is %d\n",len);
    
    return 0;
}

