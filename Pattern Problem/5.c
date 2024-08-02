#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<n*2;i++)
    {
        int totalstar=i>n?2*n-i:i;
        for(int j=0;j<totalstar;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
return 0;
}