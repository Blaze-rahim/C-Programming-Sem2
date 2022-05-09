// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int len, c, i=0, temp;
    char s1[100], s2[100], c=0;
    printf("1. lenght\n2.Reverse \n3. Equity\n4.Palindrome");
    scanf("%d",&c);
    printf("Ya string : ");
    scanf("%s",s1);
    if (c == 3){
        printf("Ya string 2 : ");
        scanf("%a",s2);

    }

    
    switch(c){
        case 1:
            for(len=0; s1[len] != '\0';len++);
            printf("The lenght of string is %d\n",len);
            break;
            
        case 2:
            for(len=0; s1[len] != '\0';len++);
            printf("The lenght of string is %d\n",len);
            len -=1;
            while(i<len){  
                temp = s1[len];  
                s1[len] = s1[i];  
                s1[i] = temp;  
                i++; 
                len--; 
            }
            printf("Reverse is : %s",s1);
            break;
        
        case 3:
            for(len=0; s1[len] != '\0';len++);
            printf("The lenght of string is %d\n",len);
            len -=1;
            for(i=0;i<len;i++){
                    if(s1[i]=s2[i]){
                        c++;
                    }
            }
            if(len == c) printf("Equal Strings");
            else printf("Not equal");
            break;
            
            
            
        
    }
    return 0;
}