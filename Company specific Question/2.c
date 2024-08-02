/* input:[1,3] [2]
output: 2(mid element without creating a new array)
*/
#include<stdio.h>
int main(){
    int a[]={1,3};
    int b[]={2};
    int sum=0;
    for(int i=0;i<2;i++)
    {
        sum+=a[i];
    }
    for(int j=0;j<1;j++)
    {
        sum+=b[j];
    }
    printf("%d",sum/3);
return 0;
}
