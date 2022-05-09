#include<stdio.h>
int main(){
    int arr[100], odd[100], even[100];
    int i,j=0,k=0,n;
    
    printf("Enter size of an array");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter arr value");
        scanf("%d",&arr[i]);
        }
        
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                even[j]=arr[i];
                j++;
            }
            else{
                odd[k]=arr[i];
                k++;
            }
        }
    
    printf("Even Number Array:\n");
    for(i=0;i<j;i++){
        printf("%d\n",even[i]);
    }
    
    printf("Odd Number Array:\n");
    for(i=0;i<k;i++){
        printf("%d\n",odd[i]);
    }
    return 0;
}

// Output:

// Enter size of an array7
// Enter arr value1
// Enter arr value2
// Enter arr value3
// Enter arr value4
// Enter arr value5
// Enter arr value6
// Enter arr value7
// Even Number Array:
// 2
// 4
// 6
// Odd Number Array:
// 1
// 3
// 5
// 7