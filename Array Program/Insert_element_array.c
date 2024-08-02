#include<stdio.h>
int main(){
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int a[size+1];
    printf("Enter the Elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int x=3;
    int pos=3;
    for(int i=size-1;i>=(pos-1);i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=x;
    for(int i=0;i<size+1;i++)
    {
        printf("%d",a[i]);
    }
return 0;
}