#include <stdio.h>
#include <stdlib.h>

int read(int n);
void* display(int n, int (**ptr));

int main(){
    int n;
    printf("Enter the n for n x n mattix");
    scanf("%d",&n);
    
    read(n);
    
    return 0;
}

int read(int n){
    int mat[n][n];
    int *ptr[n][n];
    

    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
            printf("Enter matrix of [%d] [%d]",i+1,j+1);
            scanf("%d", &mat[i][j]);
            ptr[i][j] = &mat[i][j];
            }
        }
    display(n, *ptr);
}

void* display(int n, int (**ptr)){
    for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++) {
            printf("%d\t", ptr[i][j]);
            if (j == 3 - 1) {
                printf("\n\n");
            }
        }
        }
}

