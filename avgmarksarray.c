#include <stdio.h>
int main(){
    int n, sum=0;
    float avg;
    printf("Enter the number of subjects");
    scanf("%d",&n);
    float marks[n];// just space complexity reduction
    for(int i=0; i<n ; i++){
        printf("Enter marks of Subject %d",i+1);
        scanf("%f",marks[i]);
        sum += marks[i];
    }
    avg = sum/n;
    printf("The avg marks of %d subjects is %d",n,sum);
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