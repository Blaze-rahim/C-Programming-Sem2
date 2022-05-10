#include<stdio.h>
int swap(int,int);
int main(){
    int a,b;
    printf("Enter two no.s");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("After swap, inside main function  :");
    printf("a=%d\tb=%d\n",a,b);
}
int swap(int x,int y){
   int z;
   z=x;
   x=y;
   y=z;
   printf("After swap, inside swap function  :");
   printf("x=%d\ty=%d\n",x,y);
}
