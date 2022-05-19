// a.
// *
// **
// ***
// ****
// *****

// #include <stdio.h>
// int main(){
//     int r;
//     printf("Enter the rows");
//     scanf("%d",&r);
//     for(int i = 1; i<=r; i++){
//         for(int j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// b.
// *****
// ****
// ***
// **
// *


#include <stdio.h>
int main(){
    int r;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = r; i>=1; i--){
        for(int j = 1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}