#include<stdio.h>
int main()
{
int n=7;
int i,j;
for (i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf(" %2d",j*i);
    }
    printf("\n");
}
return 0;
}

// output:
//   1
//   2  4
//   3  6  9
//   4  8 12 16
//   5 10 15 20 25
//   6 12 18 24 30 36
//   7 14 21 28 35 42 49