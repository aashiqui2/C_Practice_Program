#include <stdio.h>
int main()
{
    int i, j, no = 1, len=5;
    for (i = 1; i <= len; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" %2d ", no);
            no++;
        }
        printf("\n");
    }
    return 0;
}


// output :
//   1 
//   2   3
//   4   5   6
//   7   8   9  10
//  11  12  13  14  15
