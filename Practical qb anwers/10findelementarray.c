#include <stdio.h>
int main(){
    int finder(int arr[], int n);
    int arr[100],n;

    printf("Number of elements : ");
    scanf("%d",&n);

    printf("Elements:");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    finder(arr,n);

    return 0;
}

int finder(int arr[], int n){
    int a, i, flag = 0;
    printf("Element u wanna search : ");
    scanf("%d", &a );

    for(i = 0; i<n; i++){
        if(arr[i]==a){
            flag = 1;
            break;
        }
    }
    if (flag==0) printf("%d isnt in the array", a);
    else printf("%d found at index of %d",a,i+1);

    return 0 ;

}