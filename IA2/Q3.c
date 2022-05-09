#include <stdio.h>
#include <stdlib.h>

int main() {
    int n= 8,m = 7, a1[n], a2[m];
    int t = m+n;
    int i, array[t];

    for (i = 0; i<n; i++){ 
        a1[i]=rand()%10; 
        if (i < m) a2[i]=rand()%10;
    }

    printf("Array 1: ");
    for(i=0; i<n; i++){
        printf("%d ", a1[i]);
    }
    printf("\n");

    printf("Array 2 : ");
    for (i = 0; i < m; i++){
        printf("%d  ", a2[i]);
    } 
    printf("\n");
    
    mergeArray(array, a1, a2, t, n); 
    
    printf("Array After array and before Sorting: ");
    for(int i = 0; i < t; i++ ){
        printf("%d  ", array[i]);
    }
    printf("\n");


    sortArray(array,t);

    printf("Array After Sorting: ");
    for(int i = 0; i < t; i++ ){
        printf("%d  ", array[i]);
    }
    return 0;
}


int mergeArray(int* array,int a1[], int a2[], int t, int n){
    int i, j = 0; 
    for (i = 0; i < t; i++){
        if(i<n){
           array[i]=a1[i];
        }
        else{
           array[i]=a2[j];
            j++;
        }
    }

    return 0;
}

int sortArray(int *array,  int t){
    
    int i,j,temp;

    for(i=0;i < t;i++){
        for(j=0;j < t;j++){

            if(array[i]<=array[j]){

                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return 0;
}

// Output:

// Array 1: 1 4 9 8 2 5 1 1 
// Array 2 : 7  0  4  8  4  5  7
// Array After array and before Sorting: 1  4  9  8  2  5  1  1  7  0  4  8  4  5  7
// Array After Sorting: 0  1  1  1  2  4  4  4  5  5  7  7  8  8  9