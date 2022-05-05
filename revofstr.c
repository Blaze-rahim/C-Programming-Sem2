#include <stdio.h>
int main(){
    int i,j;
    char s1[40],s2[40];
    printf("enter string");
    gets(s1);
    for(i = 0; s1[i] != '\0'; i++);

    for(j = 0; j<i;j++){
        s2[i-j]=s1[j];
        
    }
    s2[j+1]='\0';
    puts(s2);
    printf("%s",s2);
    return 0;
}