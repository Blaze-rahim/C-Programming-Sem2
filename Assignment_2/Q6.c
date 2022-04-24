#include <stdio.h>
#include <string.h>//Header file to use funtions like strlen and etc

int main(){
    char string1[50], string2[50];//String is array of characters so we use <variablename>[<sizeofstring>]
    int c=0;
    
    printf("Enter String 1");
    scanf("%s", string1);
    
    printf("Enter string 2");
    scanf("%s", string2);
    
    int l1 = strlen(string1), l2 = strlen(string2);//strlen is a funtion in c to find the len(lenght) of a given string

    printf("%d %d",l1,l2);

    if (l1 == l2) printf("THe strings are equal ");

    else if (l1>l2) printf("' %s ' is greater", string1);
    
    else printf("' %s ' is greater", string2);
    
    return 0;
}