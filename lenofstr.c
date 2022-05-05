#include <stdio.h>
int main(){
    int i;
    char s1[50];
    printf("enter string");
    gets(s1);
    for(i = 0; s1[i] != '\0'; i++);
    printf("%d",i);
    return 0;
}