#include <stdio.h>
#include <stdlib.h>

int main() {
    int no, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &no);

    for (i = 0; i <= no; i++) {
        // Print spaces before the numbers
        for (j = 0; j < (no - i); j++) {
            printf(" ");
        }
        // Print the numbers in an increasing order
        for (j = 0; j < i; j++) {
            printf("%d ", abs(j - i/2));
        }

        printf("\n");
    }
    return 0;
}

/*
      0 
    1 0 
  1 0 1 
2 1 0 1 

*/
