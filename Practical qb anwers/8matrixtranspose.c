#include <stdio.h>
int main(){
    int lst[3][3]; 
    int m1[3][3]; 
    int i,j,k;
    
    for(i = 0; i < 3;i++){
        for(j = 0; j < 3; j++){
            printf("Enter Matrix [%d] [%d]: ", i + 1, j + 1);
            scanf("%d", &m1[i][j]);
        }
    }
    
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
    return 0;
}
    