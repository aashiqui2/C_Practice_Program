#include<stdio.h>
int main(){
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    // printf("%d",a[2][0]);
    int b[3][3];
    int len=sizeof(a)/sizeof(a[0][0]);
    // printf("%d",len);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           printf("%d ",b[i][j]);
        }
    }

return 0;
}