/*
    1
   21A
  321AB
 4321ABC
54321ABCD
*/
#include <stdio.h>

int main() {
   int i, space, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (space = 1; space <= rows - i; space++) {
         printf(" ");
      }
      for(int j = i; j>=1; j-- ){
          printf("%d",j);
      }
      char c = 'A';
      for(int k = 2; k<=i; k++){
          printf("%c", c);
          c++;
      }
      printf("\n");
   }
   return 0;
}
