#include <stdio.h>
int main(){
    int len, i=0, temp;
    char s1[100];

    printf("Ya string : ");
    scanf("%s",s1);

    for(len=0; s1[len] != '\0';len++);
    len -=1;
    
    while(i<len){  
        temp = s1[len];  
        s1[len] = s1[i];  
        s1[i] = temp;  
        i++; 
        len--; 
    }
    printf("The rev of the string is : %s", s1);
    return 0;
}