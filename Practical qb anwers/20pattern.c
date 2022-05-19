// a.
// A
// AB
// ABC
// ABCD
// ABCDE

// #include <stdio.h>
// int main(){
//     int r;
//     printf("Enter the rows");
//     scanf("%d",&r);
//     for(int i = 1; i<=r; i++){
//         char c = 'A';
//         for(int j = 1; j<=i; j++){
//             printf("%c",c);
//             c++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// b.
// ABCDE
// ABCD
// ABC
// AB
// A

#include <stdio.h>
int main(){
    int r;
    printf("Enter the rows");
    scanf("%d",&r);
    for(int i = r; i>=1; i--){
        char c = 'A';
        for(int j = 1; j<=i; j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}