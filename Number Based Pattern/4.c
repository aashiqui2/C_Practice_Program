#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int arr[2*n-1][2*n-1];

    for(int i =n;i>0;i--){
        int x = n-i,y =n*2-2-n+i;
        for(int j =x;j<=y;j++){
            arr[x][j] = i;
            arr[y][j] = i;
            arr[j][x] = i;
            arr[j][y] = i;
        }
    }
    
    for(int i =0;i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4 
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


*/