#include<stdio.h>
int main(){ 
    int n,i,x,index=0,max,min;

    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);

    max=a[0];
    min=a[0];

    for(i=1;i<=n-1;i++){

        if(a[i]>max)
            max=a[i];

        else{ 
            if (a[i]<min)
                min=a[i];
        }
    }

    printf("max=%d and min=%d\n", max, min);
    
    return 0;

}

    