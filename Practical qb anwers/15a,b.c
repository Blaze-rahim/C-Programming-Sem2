// a.
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>
int main(){
    int r;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = 1; i<=r; i++){
        for(int j = 1; j<=i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}

// b.
// 12345
// 1234
// 123
// 12
// 1


// #include <stdio.h>
// int main(){
//     int r;
//     printf("Enter the rows");
//     scanf("%d",&r);
//     for(int i = r; i>=1; i--){
//         for(int j = 1; j<=i; j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }