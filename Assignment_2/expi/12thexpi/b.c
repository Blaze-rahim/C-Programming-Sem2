#include <stdio.h>
int main(){
    int swap(int *a, int *b);
    int a,b;
    printf("Enter two no.s");
    scanf("%d%d",&a,&b);
    printf("Before swap : a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap : a=%d b=%d",a,b);
    return 0;
}

int swap(int *a, int *b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}