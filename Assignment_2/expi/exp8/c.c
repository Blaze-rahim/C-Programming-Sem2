#include <stdio.h>
int main(){
    
    int len, c=0, i;
    char s1[100], s2[100];

    printf("Ya string : ");
    scanf("%s",s1);

    printf("Ya string 2 : ");
    scanf("%s",s2);


    for(len=0; s1[len] != '\0';len++);
        len -=1;
        for(i=0;i<len;i++){
                if(s1[i]==s2[i]){
                    c++;
                }
        }
        if(len == c) printf("Equal Strings");
        else printf("Not equal");
    
    return 0;
}