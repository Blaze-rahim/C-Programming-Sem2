#include <stdio.h>
#include<math.h>
int main(){
    int n,i;
    int arr[100];

    printf("Enter the numbe of elements");
    scanf("%d",&n);

    printf("Enter your elements\n");
    for(i = 0; i<n; i++)
    {
        printf("Element %d: ",i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i<n; i++)
    {
        int c = pow(arr[i],2);
        printf("\nSquare of element %d is %d ", i+1 , c);
    }
    printf("\n");
    for(i = 0; i<n; i++)
    {
        float c = sqrt(arr[i]);
        printf("\nSquare root of element %d is %f ", i+1 , c);
    }
    return 0;
}