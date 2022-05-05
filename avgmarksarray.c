#include <stdio.h>
int main(){
    int n, sum=0, marks[100], avg;
    printf("Enter the number of subjects");
    scanf("%d",&n);
    
    for(int i=0; i<n ; i++){
        printf("Enter marks of Subject %d",i+1);
        scanf("%d",&marks[i]);
    }
    
    for(int i=0; i<n ; i++){
        sum += marks[i];
    }
    avg = sum/n;
    printf("The avg marks of %d subjects is %d",n,avg);
    return 0;
}

// Algorithm
// start
// intialize n, sum, avg and marks[n]
// input n
// for i=0 to n
//     input marks[i]
//     sum = sum + marks[i]

// avg = sum/n
// print sum
// end