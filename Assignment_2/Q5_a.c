#include <stdio.h>
int main(){
    int size, num, list[50], c; // To assign array we will hve to use square bracks
    //  like <nameofvariable>[<sizeofarray>]

    //To determine how many nums we will put in arry
    printf("Enter the No of elements in array");
    scanf("%d", &size);

    //To enter elements in list/array
    printf("Enter ya array elements bois");
    for(int i = 1; i<=size;i++) scanf("%d",&list[i]);

    //The number u wanna search
    printf("Enter the number u wanna search");
    scanf("%d", &num);

    //So basically array ka index starts from 0 so the index
    // Of the first element is 0 , suppose a array = ['a','b','c']
    // So index of "a" is 0 and "b" is 1 and "c" is 2. so if u write
    // array[0], your output will be a.

    //Now taking a for loop and start to search the elements in array using index
    for(int i = 0; i <= size ; i++){ //i = 0 because index starts from 0
        if (list[i] == num){// Condtion to check if the number and number we searchin are same or not
            printf("%d was found on the index of %d",num,i-1);
            c=0; //setting c to 0 so the if out of loop doesnt get triggerd
            break;
        }
        else{
            c = 1; // c will be 1 if there is no element in list/array
        }

    } 
    if (c == 1) printf("Element not found!");
    return 0;
}