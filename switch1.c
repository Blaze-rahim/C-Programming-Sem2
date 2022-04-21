#include<stdio.h>
#include<math.h>

int main(){
    int c,n;
    printf("1.Square root\n2. Square\n3. Cube\n4. Prime \n5. Factorial\n6. N Factors");
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
            printf("Cube of %d is %d",n,(n*n*n));
            break;
        
        case 4:
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
            
            else if (count==1) printf("%d is not Prime",n);
            break;
        
        case 5:
            printf("Enter Number");
            scanf("%d",&n);
            int a = 1;
            for(int i = 1; i<=n ; i++){
                a *= i;
            }
            printf("Factorial of %d is %d",n,a);
            break;

        case 6:
            printf("Enter Number");
            scanf("%d",&n);
            int c;
            for(int i = 2; i<=n;i++){
                if(n%i==0){
                    c = 0;
                    for(int j = 2; j<=i/2; j++){
                    if (i%j == 0){
                        c = 1;
                        break;
                        }
                    }
                    if(c==0) printf("Prime Factor of %d is %d\n",n,i);
                } 
                
            }
        
        default:
            printf("Invalid Number");
            break;
    
    }
    return 0;
}
