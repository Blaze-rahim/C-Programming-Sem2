// Write a menu driven program to perform following operations:
// a.Perform addition of two 3X3 matrices.
// b.Obtain transpose of a given 3X3 matrix.
// c.Multiplication of two 3X3 matrices. 

#include <stdio.h>
int main(){
    char choice;
    int lst[3][3]; //empty array 
    int m1[3][3]; // matrix 1
    int m2[3][3];// matrix 2
    int i,j;// loop intialization
    printf(" a. Addition of matrices \n b. Transpose of matrices \n c. Multiplication of matrices");
    scanf("%c",&choice);
    
    for(i = 0; i < 3;i++){
        for(j = 0; j < 3; j++){
            printf("Enter Matrix [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    if (choice != 'b'){
        for(i = 0; i < 3;i++){
            for(j = 0; j < 3; j++){
                printf("Enter Matrix [%d] [%d]: ", i + 1, j + 1);
                scanf("%d", &m2[i][j]);
            }
        }
    }
    switch (choice){
    case 'a':
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++) {
                lst[i][j] = m1[i][j] + m2[i][j];
            }
        }

        printf("\nSum of two matrices: \n"); // To print matrix
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++) {
                printf("%d\t", lst[i][j]);
                if (j == 3 - 1) {
                    printf("\n\n");
                }
            }
        }
        break;
    
    case 'b':
        for(i=0; i<3; i++){
            for(j=0; j<3; j++)
                lst[j][i] = m1[i][j];
        }

        printf("\nTranspose of given Matrix is:\n");
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++) {
                printf("%d\t", lst[i][j]);
                if (j == 3 - 1) {
                    printf("\n\n");
                }
            }
        }
        break;
    
    case 'c':
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++) {
                lst[i][j] = m1[i][j] * m2[i][j];
            }
        }

        printf("Multiplication of two matrices: \n"); // To print matrix
        for (i = 0; i < 3; i++){
            for (j = 0; j < 3; j++) {
            printf("%d\t", lst[i][j]);
            if (j == 3 - 1) {
                printf("\n\n");
            }
        }
        }
        break;


    default:
        printf("Wrong input bud");
        break;
    }
    return 0;
}