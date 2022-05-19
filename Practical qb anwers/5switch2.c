#include<stdio.h>
#include<math.h>

int main(){
    int c,n;
    printf("1.Square root\n2. Prime \n3. Cube");
    scanf("%d",&c);

    switch (c)
    {
        case 1:
            printf("Enter Number");
            scanf("%d",&n);
            printf("Square root of %d is %f",n,sqrt(n));
            break;
        
        case 2:
            printf("Enter Number");
            scanf("%d",&n);
            int count=0;
            for(int i = 2; i<(n/2); i++){
                if (n%i == 0){
                    count = 1;
                    break;
                    }
            }
            if (count==0) printf("%d is Prime",n);
            
            break;
        case 3:
            printf("Enter Number");
            scanf("%d",&n);
            printf("Cube of %d is %d",n,(n*n*n));
            break;
        
        
        default:
            printf("Invalid Number");
            break;
    
    }
    return 0;
}
