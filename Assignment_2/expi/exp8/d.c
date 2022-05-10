#include <stdio.h>
#include <string.h>

int main (){ 
    char s1[20]; 
    int i, len, flag = 0;

    printf ("Enter a string :");
    scanf("%s",&s1);
    
    for(len=0; s1[len] != '\0';len++);

    for (i=0; i< len; i++) {

        if (s1[i] != s1[len-i-1]) { 
            flag = 1;
            break; 
        }
    }
    if(flag == 1) printf("Not Palindrome");
    else printf("Palimdome");

return 0;
}