#include<stdio.h>
#include<math.h>

int main(){
    int c,n;
    printf("1.Square root\n2. Square\n3. Factorial");
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
            printf("Square of %d is %d",n,n*n);
            break; 
        
        case 3:
            printf("Enter Number");
            scanf("%d",&n);
            int a = 1;
            for(int i = 1; i<=n ; i++){
                a *= i;
            }
            printf("Factorial of %d is %d",n,a);
            break;

        default:
            printf("Invalid Number");
            break;
    
    }
    return 0;
}
