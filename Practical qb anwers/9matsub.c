#include <stdio.h>
int main(){
    int lst[3][3]; 
    int m1[3][3];
    int m2[3][3];
    int i,j,k;
    
    for(i = 0; i < 3;i++){
        for(j = 0; j < 3; j++){
            printf("Enter Matrix [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    for(i = 0; i < 3;i++){
        for(j = 0; j < 3; j++){
            printf("Enter Matrix [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

     for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++) {
            lst[i][j] = m1[i][j] - m2[i][j];
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

    return 0;
}
    