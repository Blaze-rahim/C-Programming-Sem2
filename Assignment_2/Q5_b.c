// | 1  2  4 |
// | 5  6  2 |  so ans should be 1+6+9 = 16
// | 7  2  9 |

//WAP to find and display the sum of diagonal elements of m*n matrix.

#include <stdio.h>
int main(){
    int cr, s=0, matrix[15][15]; 

    printf("Enter your n and m of matrix");
    scanf("%d" , &cr);

    for(int i = 1; i<= cr; i++){
        for(int j = 1; j<=cr; j++){
            printf("Enter the elements in [%d] [%d]", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 1; i<=cr; i++){
        for(int j = 1; j<=cr; j++){
            if(i==j){
                s += matrix[i][j];
            }
        }
    }

    printf("The sum of diagonal matrix is : %d", s);
    return 0;
}