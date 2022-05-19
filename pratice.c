#include<stdio.h>
int main()
{
    int i, n, flag=1;
    printf("enter tested number \n");
    scanf("%d",&n);
    
    for(i=2;i<=n;i++){
        if (n%i == 0){
        break;
        }
        
        else{ 
        flag = 0;
         }
    }
    if (flag==0){
        printf("omedeto its prime");
    
    }
    else if (flag ==1) printf("Not prime");
    
   
return 0;
}